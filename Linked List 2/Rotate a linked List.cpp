/* 
 *  struct Node {
 *    int data;
 *    Node *next;
 *  };
 *
 *  The above structure defines the linked list node.
 */
// node *head, *tail; already created in class LinkedList
void LinkedList :: rotateList(int k) {
  if(head== NULL)
    return;
  if(head->next == NULL or k==0)
    return;
 int cnt =1 ;
  int len = 1;
 for( node*curr = head; curr!= tail; curr = curr->next)
 {
  len++;
  }
  if(k>len)
  {
    return;
  }
  k= k%len;
   node*curr = head;
  if(k == 0)
  {
    return;
  }
  while(cnt<k)
  {
    cnt++;
    curr = curr->next;
  }
tail->next = head;
 head = curr->next;
  curr->next = NULL;
}

// Rotate a linked List
// Given a singly linked list, rotate the list counter-clock wise by k nodes. For example,

// If the given list is 1 -> 2 -> 3 -> 4 -> 5 -> 6 and k = 4, then the list must be modified to 5 -> 6 -> 1 -> 2 -> 3 -> 4.

// Note: If k is greater than the size of the list, leave the list unchanged.

// Input Format

// The first line contains an integer n, the size of the list.
// Next line contains n integers.
// Third line contains an integer k.
// Output Format

// Print the node values separated with space.
// Constraints

// 0 <= n <= 10^5
// ﻿0 <= k <= 10^6
// Sample Input

// 6            // n
// 1 2 3 4 5 6  // linked list nodes
// 4            // k
// Sample Output

// 5 6 1 2 3 4
