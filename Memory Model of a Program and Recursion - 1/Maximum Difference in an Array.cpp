#include<bits/stdc++.h>
int maxDifference(int arr[], int n){
  // complete this function
 // sort(arr,arr+n);
  int ans = -1;
  int mini = arr[0] ;
  for(int i = 1; i<n; i++)
  {
    int res =-1;
    if(mini < arr[i])
     	res = arr[i] - mini;
    ans = max(ans, res);
    mini = min(mini, arr[i]);
  }
  return ans;
}

// Maximum Difference in an Array
// Given an array of integers, your task is to compute the maximum difference between any two elements such that larger element appears after the smaller element, i.e., for the given array find the maximum value of arr[j] - arr[i] for all i, j where 0 ≤ i < j < n and arr[i] < arr[j]. For all the elements, if no lower indexed smaller element exists, then return -1.

// For example, given an array arr = [ 1, 2, 6, 4], you would first compare 2(i.e. arr[1]) to the elements to its left. 1 is smaller, so calculate the difference 2 - 1 = 1.

// 6(i.e. arr[2]) is bigger than 2 and 1, so calculate the differences, and that will come out to be 4 and 5 respectively.

// 4(i.e. arr[3]) is only bigger than 2 and 1, and the differences are 2 and 3.

// The largest difference was 6 - 1 = 5.

// Complete the function maxDifference(), which takes and array of integers as parameter and return an integer representing the maximum difference in the array.

// Constraints:

// 1 ≤ n ≤ 2 * 10^5
// −10^6 ≤ arr[i] ≤ 10^6
// Input Format

// The first line contains a single integer, n, denoting the number of elements in the array arr[].
// Each of the n subsequent lines contains a single integer describing element arr[i] where 0 ≤ i < n.
// Output Format

// Print the maximum difference of array
// Sample Input

// 7  // n
// 2
// 3
// 10
// 2
// 4
// 8
// 1
// Sample Output

// 8
// Explanation

// n = 7, arr = [2, 3, 10, 2, 4, 8, 1]
// Differences are calculated as:

// 3 - [2] = [1]
// 10 - [3, 2] = [7, 8]
// 4 - [2, 3, 2] = [2, 1, 2]
// 8 - [4, 2, 3, 2] = [4, 6, 5, 6]
// The maximum is found at 10 - 2 = 8.