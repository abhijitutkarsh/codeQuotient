/* 
 *  struct Employee
 *  {
 *    string name;
 *    Employee* sendsReqTo;
 *  };
 *
 *	The above structure denotes an Employee node in the linked list
*/
Employee* specialEmployee(Employee* firstEmployee) {
  Employee* slow = firstEmployee;
  Employee* fast = firstEmployee;
  int flag=0;
  while(fast!= NULL and fast->sendsReqTo)
  {
    slow= slow->sendsReqTo;
    fast = fast ->sendsReqTo ->sendsReqTo;
    if(slow == fast)
    {
     // slow=slow->next;
      flag =1;
      break;
    }
  }
 if (flag == 0 )
   return 0;
  slow = firstEmployee;
  while(slow!= fast)
  {
    slow = slow ->sendsReqTo;
    fast = fast-> sendsReqTo;
  }
  return slow;
}

// Find the special employee
// Some employees of a company decided to connect on Facebook, either directly or indirectly(i.e. via some common friend) on a single day. But due to some recent restrictions, a person can send only one friend request per day. Therefore, to connect together exactly on the same day, they came up with the following plan:

// Employee1 will send the friend request to Employee2, then Employee2 will send the request to Employee3, and so on... This way, they will be connected with each other.

// In this plan, the last employee has an advantage - He can send a friend request to any of the employees, or he can choose not to send it to anyone. But, if he decides to send the request to an employee, then that person will be considered as a special employee (because he would receive friend requests from two people).

// Given a linked-list representing their plan, in which each node denotes an employee. Your task is to find and return the node representing the special employee if it exists, otherwise return NULL.

// For Example: According to the below diagram, Aman is the special employee because he will receive friend requests from two people.



// Complete the function specialEmployee() which takes the head node of the linked list(i.e. the first employee) as a parameter, and returns the node representing the special employee.

// Input Format

// First line contains the number of Test cases i.e. T.
// Each test case contains the following:
//   First line will contain N, denoting the number of employees.
//   Next N lines will contain the names of the employees.
//   Last line will contain the position of special employee in the list. If no special employee exists, then this input will be -1.
// Output Format

// Print the name of the special employee if it exists, else print -1.
// Constraints

// 1 <= no. of testcases <= 10
// 0 <= no. of employees <= 10^5
// Employee name will only contain English alphabets
// Sample Input

// 1  // Test Cases
// 5  // No. of employees
// Rajesh
// Shivam
// Aman
// Karan
// Seema
// 2  // This signifies the position of special employee (consider 0-based indexing) 
// Sample Output

// Aman
// Explanation

// Seema will send the friend request to 2nd employee (i.eAman), so he is a special one.