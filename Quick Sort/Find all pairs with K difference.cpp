int getPairsCount(int arr[], int n, int k) {
  // Write your code here
  int count = 0;
sort(arr,arr+n);
  int l = 0, r =0;
  while(r<n)
  {
    if(arr[r] - arr[l] == k)
    {count++;l++;r++;}
    else
      if(arr[r]- arr[l] >k)
       l++;
    else
      r++;
  }
  return count;
}


// Find all pairs with K difference
// Given an array of N distinct integers, find all the pairs of integers in it, with the difference equals to a given number K.

// Complete the function in the editor, which takes the array and K as parameters and return the number of pairs with the difference K.

// Input Format:

// First line of input will contain a positive integer T = number of test cases. Each test case will contain 2 lines.
// First line of each test case contains two positive integers, N and K. 
// Next line will contain N distinct numbers separated by space.
// Output Format:

// For each test case, print number of pairs whose difference will be equal to k.
// Constraints:

// 1 ≤ T ≤ 10
// 1 ≤ N ≤ 10^5
// -(10^7) ≤ arr[i] ≤ 10^7
// 1 ≤ K ≤ 10^8
// Sample Input

// 3  // Test cases
// 10 7
// 1 2 3 4 5 6 7 8 9 10
// 5 4
// 4 2 3 1 10
// 6 27
// 10 15 38 22 11 36
// Sample Output

// 3
// 0
// 1
