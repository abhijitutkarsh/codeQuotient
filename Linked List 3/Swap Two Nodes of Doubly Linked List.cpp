/* 
 *  struct Node {
 *    int data;
 *    Node *next;
 *    Node *prev;
 *  };
 *
 *  The above structure defines the linked list node.
 */
// Return the head of updated list after swapping the two nodes
Node* swapNodes(Node* head, int x, int y) {
  // Write your code here
  Node*fir = head;
  Node*sec = head;
  if(x == y)
  {
    return head;
  }
  while(fir!= NULL)
  {
    if(fir->data == x or fir->data == y)
    {
      break;
    }
    fir = fir->next;
  }
  while(sec!= NULL)
  {
    if(sec == fir){
      sec=  sec->next;
    }
    if(sec == NULL)break;
     if(sec!= NULL and sec->data == x or sec->data == y)
    {
      break;
    }
    sec=sec->next;
  }
  if(fir == NULL or sec == NULL)return head;
  if(fir == sec)return head;
  Node*d1 = fir->prev;
  Node*d2 = fir->next;
  Node*d3 = sec->prev;
  Node*d4 = sec->next;
  // fir = pehli 
  // sec = last
  if(fir->prev == NULL and sec->next == NULL)
  {
    if(fir->next == sec)
    {
     sec->next = fir;
      fir->prev = sec;
      sec->prev = NULL;
      fir->next = NULL;
      head = sec;
      return head;
     }
    d2->prev = sec;
    sec->next = d2;
    sec->prev = NULL;
    d3->next = fir;
    fir->prev = d3;
    fir->next = NULL;
    head = sec;
    return head;
  }
  if(fir->next == sec)
   {
    if(sec->next == NULL)
    {
      d1->next = sec;
      sec->prev = d1;
      sec->next = fir;
      fir->prev = sec;
      fir->next = NULL;
      return head;
     }
    else if(fir->prev == NULL)
    {
      d4->prev = fir;
      fir->next = d4;
      sec->prev = NULL;
      sec->next = fir;
      head = sec;
      return head;
    }
    d1->next = sec;
    sec->prev = d1;
    sec->next = fir;
    fir->prev = sec;
    fir->next = d4;
    d4->prev = fir;
    return head;
   }
  if(sec->next == NULL)
  {
  d1->next = sec;
  sec->prev= d1;
  sec->next = d2;
  d2->prev = sec;
  d3->next = fir;
  fir->prev = d3;
   fir->next = NULL;
    return head;
  }
  else if(fir->prev == NULL)
  {
  sec->next = d2;
  d2->prev = sec;
  sec->prev = NULL;
  d3->next = fir;
   fir->prev = d3;
   fir->next = d4;
   d4->prev = fir;
   head =sec;
    return head;
  }
  // for first node;
  d1->next = sec;
  sec->prev= d1;
  sec->next = d2;
  d2->prev = sec;
  // second node
  d3->next = fir;
  fir->prev = d3;
  fir->next = d4;
  d4->prev = fir;
  return head;
}
//////////////////////////////////////////////////////////////////////
/* 
 *  struct Node {
 *    int data;
 *    Node *next;
 *    Node *prev;
 *  };
 *
 *  The above structure defines the linked list node.
 */
// Return the head of updated list after swapping the two nodes
Node* swapNodes(Node* head, int x, int y) {
  // Write your code here
  Node*fir = head;
  Node*sec = head;
  while(fir!= NULL)
  {
    if(fir->data == x)
    {
      break;
    }
    else {
      fir = fir->next;
    }
  }
   while(sec!= NULL)
  {
    if(sec->data == y)
    {
      break;
    }
    else {
      sec = sec->next;
    }
  }
  if(fir == NULL or sec == NULL)return head;
  swap(fir->data,sec->data);
  return head;
}
// Swap Two Nodes of Doubly Linked List
// Given a pointer to the head node of a doubly linked list and two keys, x and y respectively, swap these two nodes of the list (if these nodes exists in the list).

// Note: All the linked list nodes contain distinct data.

// Complete the function swapNodes(), which takes the head node of a doubly linked list along with x and y as a parameter, and returns the head of updated list after swapping the two nodes.

// Input Format:

// First line contains an integer denoting number of test cases.
// Each test case has 4 lines. First line contains the number of elements in list, Second line contains the list elements separated by space.
// Third and Fourth lines contains the node numbers to be swapped.
// Output Format:

// Print the integer data for each element of the modified linked list separated by space.
// Constraints:

// 1 <= no. of testcases <= 10
// 0 <= no. of nodes <= 10^5
// ﻿﻿0 <= node data <= 10^6
// 0 <= x, y <= 10^6﻿
// Sample Input

// 1             // test cases
// 6             // no. of nodes (TC-1)
// 1 2 3 4 5 6   // node's data
// 3             // x
// 5             // y
// Sample Output

// 1 2 5 4 3 6