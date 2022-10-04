#include<bits/stdc++.h>
int getMajorityElement(int array[], int size) {
  // Write Your Code here
  map<int,int>mp;
  for(int i = 0 ; i<size; i++)
    mp[array[i]]++;
  int ans=-1;
  for(auto a: mp)
  {
    if(a.second > size/2)
      ans = a.first;
  }
  return ans;
}

// Find Majority Element in Array
// Given an array of size n, find the majority element. The majority element is the element that appears more than n/2 times.

// You may assume that the array is non-empty and and the contents of array are always positive

// Complete the function given getMajorityElement() in the editor, that accepts an array & returns the majority element of the array.

// Input Format

// The first line of input contains an integer N, denoting the total elements in array
// The second line contains N spaced integers , element of the array.
// Constraints

// 1 <= n <= 10^5
// 1 <= arr[i] <= 10^9
// Output Format

// Print the majority element in a new line
// Sample Input 1

// 7  // n
// 2 2 1 1 1 2 2  // arr[]
// Sample Output 1

// 2  // majority element
// Sample Input 2

// 5
// 1 2 3 4 1
// Sample Output 2

// -1
// Explanation:

// Since there is no majority element display -1