/* 
 *  struct Node {
 *    int data;
 *    Node *next;
 *  };
 *
 *  The above structure defines the linked list node.
 */

int count(Node* head)
{
  Node* temp = head;
  
  int ans=0;
   
  while(temp!= NULL)
  {
    ans++;
    temp= temp->next;
  }
  return ans;
}
Node* getMerge(int d, Node* head1 , Node* head2)
{
  Node* cur1 = head1;
  Node* cur2 = head2;
  
  
  for(int i =0 ; i<d ; i++)
  {
    cur1 = cur1 ->next;
  }
  
  while(cur1!= NULL and cur2!=NULL)
  {
    if(cur1 == cur2) return cur1;
    
    cur1 = cur1->next;
    cur2 = cur2->next;
  }
  return NULL;
}
Node* findMergePoint(Node* head1, Node* head2) {
  
  int c1= count(head1);
  int c2 = count(head2);
  Node* val;
  int d;
  if(c1>c2)
  {
     d = c1-c2;
    return getMerge(d, head1, head2);
  }else
  {
    d = c2 - c1;
    return getMerge(d,head2, head1);
  }
}
// Find the merge point of two lists star_border
// As a linked list contains nodes, a node can belong to multiple lists as well.

// So, given two linked lists, find out if there exists a common node where both the linked lists merge. If it exists, then return that node else return NULL

// Example: The merge point for the below two linked lists is 5.





// Complete the function findMergePoint() which takes the head node of two linked lists as parameters, and returns the merging node (if exists, otherwise returns NULL).

// Note: The linked lists must retain their original structure after the function returns.

// Constraints:

// 1 <= no. of test cases <= 10
// 0 <= no. of nodes <= 10^5
// 0 <= node data <= 10^5﻿
