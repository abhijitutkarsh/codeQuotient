/* 
 *  struct Node {
 *    int data;
 *    Node *next;
 *  };
 *
 *  The above structure defines the linked list node.
 */
int isCircular(Node* head) {
  // Write your code here
     if(head == NULL)return 1;
   // if(head->next == head)return 1;
  if(head->next == NULL){
    return 0;
  }
  Node* fast =head;
  Node* slow = head;
  while(fast!= NULL and fast->next!=NULL)
  {
    slow= slow->next;
    fast = fast->next->next;
    if(slow == fast)
      break;
  }
  if(slow == fast and slow ==head)
  return 1;
  return 0;
}

// Given list is circular or not
// In circular list the last node points to the first node creating a loop of nodes. Now, given a pointer to the head node of a linked list, find out if it is circular or not.

// Complete the function isCircular() given in the editor, which takes the head of the list as parameter and returns 1 if the linked list is circular and 0 otherwise.

// Note: If the linked list is empty, then consider it as a circular linked list.

// Input

// The functions isCircular() takes the head node of a linked list as input.
// Output

// Return 1 if the given list is circular, else return 0.
// Constraints

// 0 <= no. of nodes <= 10^5
// 0 <= node data <= 10^6
