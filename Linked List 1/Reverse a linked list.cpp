/* 
 *  struct Node {
 *    int data;
 *    Node *next;
 *  };
 *
 *  The above structure defines the linked list node.
 */
struct Node* reverseList(struct Node* head) {
  Node * a = head;
    Node* n = NULL;
  while(a!=NULL)
  {
    Node *nextNode = a->next;
 	a->next = n;
    n = a;
    a = nextNode;
  }
  head = n;
}

// Reverse a linked list
// A linked list is a collection of nodes. First node is called head node and last node called the tail node.

// Now, given a pointer to the head node of a linked list, can you reverse the linked list i.e. New list must start with tail node and end at head node. So it becomes the reverse of the original list.

// Example:

// Original List: head -> 1 -> 2 -> 3 -> 4 -> 5 -> NULL

// Reversed List: head -> 5 -> 4 -> 3 -> 2 -> 1 -> NULL

// Complete the function reverseList() given in the editor, which takes the head node of a linked list as a parameter, and returns the new head of reversed list.

// Input Format:

// First line contains an integer i.e. Number of test cases.
// Each test case have two lines. First line has the total number of nodes and second line has the node values.
// Output Format:

// Print the integer data for each element of the reversed linked list separated by space.
// Constraints:

// 1 <= no. of testcases <= 10
// 0 <= no. of nodes <= 1000
// 0 <= node data <= 100﻿﻿
// Sample Input

// 1  // Test Cases
// 3      // no. of nodes
// 1 2 3  // node's data
// Sample Output

// 3 2 1