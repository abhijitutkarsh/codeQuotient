/* 
 *  struct Node {
 *    int data;
 *    Node *next;
 *  };
 *
 *  The above structure defines the linked list node.
 */
int countNodes(Node* head) {
  // Write your code here
   // Write your code here
  if(head == NULL)return 0;
  int count = 1 ;
  Node* temp = head;
  temp = temp -> next;
  while(temp != head)
  {
    count++;
    temp =  temp ->next;
  }
  return count;
}


// Count the Number of Nodes in Circular Linked List
// In circular list the last node points to the first node creating a loop of nodes. Now, given a pointer to the head node of a circular linked list, count the total number of elements in it.

// Complete the function countNodes() which takes the head node of a circular linked list as a parameter and return the number of nodes in the list.

// Input Format:

// First line will contain the total number of test cases.
// Each test case consists of 2 lines, First line has the number of nodes and second line contains the node values separated by spaces.
// Output Format:

// Print the total number of nodes in circular list.
// Sample Input

// 1  // Test Cases
// 3      // no. of nodes (TC-1)
// 1 2 3  // node's data
// Sample Output

// 3