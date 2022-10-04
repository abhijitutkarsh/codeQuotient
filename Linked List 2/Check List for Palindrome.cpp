/* 
 *  struct Node {
 *    int data;
 *    Node *next;
 *  };
 *
 *  The above structure defines the linked list node.
 */
Node* reverse(Node* head)
{
  Node* prev= NULL;
  Node* cur = head;
  while(cur!= NULL)
  {
    Node* curnxt = cur->next;
    cur->next = prev;
    prev = cur;
    cur= curnxt;
  }
  return prev;
}
int checkPalindrome(Node* head) {
// if(head != NULL) return 0;
  //if(head == NULL) return 0;
  Node* fast = head; Node* slow = head;
  while(fast != NULL and fast->next != NULL)
  {
    slow = slow -> next;
    fast = fast -> next -> next;
  }
 // cout<<slow->data<<" "<<endl;
  //Node* temp= slow;
  if(fast!=NULL and fast -> next == NULL)
  {
    	slow =slow ->next;
  }
  fast = head;
  Node* reverseN = reverse(slow);
 // cout<<slow->data<<" "<< fast->data<<endl;
  while(reverseN != NULL)
  {
    if(fast-> data != reverseN->data)
   		 return 0;
   fast= fast-> next;
    reverseN = reverseN -> next;
  }
  return 1;
}

// Check List for Palindrome
// Given a pointer to the head node of a linked list, check it is a palindrome or not.

// Examples:

// Palindrome List:     head -> 702 -> 59 -> 702 -> NULL
// Palindrome List:     head -> 3 -> 4 -> 4 -> 3 -> NULL
// Non Palindrome List: head -> 1 -> 2 -> 3 -> 1 -> NULL
// Complete the function checkPalindrome() which takes the head node of a linked list as a parameter, and return 1 if the given list is a palindrome, and 0 otherwise.

// Note: If the linked list is empty, return 0.

// Input Format:

// The first line will contains an integer i.e. number of test cases
// Each test case contains two line. First line denotes the number of nodes in list and second line contains the node values.
// Output Format:

// Print 1 if list is palindrome and 0 if list is not palindrome.
// Constraints:

// 1 <= no. of testcases <= 10
// 0 <= no. of nodes <= 10^5
// 0 <= node data <= 10^6
// ﻿Sample Input

// 2  // Test Cases
// 3
// 1 2 3
// 3
// 1 2 ﻿1
// Sample Output

// 0
// 1