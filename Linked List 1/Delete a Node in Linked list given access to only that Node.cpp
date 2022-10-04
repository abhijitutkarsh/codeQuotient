/* 
 *  struct Node {
 *    int data;
 *    Node *next;
 *  };
 *
 *  The above structure defines the linked list node.
 */
void deleteNode(Node* node) {
  if(node == nullptr)return;
  if(node->next == nullptr)return;
  Node*curr = node->next;
  node->data = curr->data;
  if(curr->next == NULL)
  {
    node->next = NULL;
  }
  else {
    node->next = curr->next;
  }
  free(curr);
  return;
}


// Delete a Node in Linked list given access to only that Node
// A linked list is a collection of nodes. Where each node contains some data address of the next node, if it is the last node then it contains the data only. This way we can access all the nodes if we have the address of first node.

// Now the task is that given a pointer to some node in a linked list, delete it if it is not the last node of the list.

// Complete the function deleteNode() which takes the address of the node of a linked list as a parameter and delete this node from the list. (If given node is the last node of the list then do nothing.)

// Input Format

// First line will contain the number of test cases T.
// Each test case contains 3 lines. First line has the total number of nodes and second line contains the N values for the nodes.
// Third line contains the node number after the head node to be deleted.
// Output Format

// Print the integer data for each element of the modified linked list separated by space.
// Constraints

// 1 <= no. of testcases <= 10
// 0 <= no. of nodes <= 10^5
// ﻿﻿0 <= node data <= 10^6
// Sample Input

// 1  // Test Cases
// 4
// 1 5 6 8
// 2
// Sample Output

// 1 5 8
// Explanation:

// 2 means 2nd node after head is to be deleted, so node w