/* 
 *  struct Node {
 *    int data;
 *    Node *next;
 *  };
 *
 *  The above structure defines the linked list node.
 */

Node* findMiddle(Node* head) {
 
  Node* fast  = head;
  Node* slow = head;
  
  while(fast!= NULL and fast->next != NULL)
  {
    slow = slow ->next;
    fast = fast -> next;
    fast = fast -> next;
    
  }
  return slow;
}

// Find the middle node of the list star_border
// Given a pointer to the head node of a linked list, find the middle node of the list.

// Complete the findMiddle(head) function: Return the middle node if number of nodes in linked list in odd, otherwise there will be two middle nodes and return the second middle node (return NULL if list is empty).

// Note: you need to find the middle node of the list in just one traversal.

// Input Format:

// The first line will contains an integer i.e. number of test cases
// Each test case contains two line. First line denotes the number of nodes in list and second line contains the node values.
// Output Format:

// For each test case, print the middle element of the list in separate line.
// Constraints:

// 1 <= no. of testcases <= 10
// 0 <= no. of nodes <= 10^5
// 0 <= node data <= 10^6
// Sample Input

// 2  // testcases
// 5            // no. of nodes (TC-1)
// 1 2 3 4 5    // nodes's data 
// 6            // no. of nodes (TC-2)
// 1 2 3 4 5 6  // nodes's data 
// Sample Output

// 3
// 4
// Explanation:

// In first list, middle element is 3.
// In second list, second middle element is 4.