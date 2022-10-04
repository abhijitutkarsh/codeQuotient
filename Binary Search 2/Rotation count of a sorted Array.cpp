int rotationCount(int arr[], int n) {
  // Write your code here
  int l=0, r =n-1;
  while(l<=r)
  {
    if(arr[l]<= arr[r])
      return l;
    int mid = (l+r)/2;
    int next = mid+1%n;
    int prev = mid-1+n%n;
    if(arr[next]>arr[mid] and arr[prev]>arr[mid])
      return mid;
    else if(arr[mid] < arr[r])
      r = mid - 1;
    else
      l = mid + 1;
  }
  return 0;
}

// Rotation count of a sorted Array
// Given a circularly sorted array of N integers, find the minimum number of rotations performed on some sorted array to create this given array.

// Assume there are no duplicate elements in the array, and the rotation is in anti-clockwise direction.

// Expected Time Complexity: O(log(N))

// Expected Space Complexity: O(1)

// Input format:

// First line of input will contain a number T = number of test cases. Each test case will contain 2 lines.
// First line will contain a number N = number of elements in the array.
// Next line will contain N space separated integers.
// Complete the function int rotationCount(int array[], int size) which will receive the array and size of the array as input and return how many times the sorted array is rotated. Function should return 0 if the array is not rotated.
// Output format:

// Print one line of output for each test case with the minimum number of rotations for the given array.
// Constraints:

//   1 <= T <= 10
//   1 <= N <= 50
//  -1000 <= arr[i] <= 1000
// Sample Input

// 2  // No. of test cases
// 6
// 15 18 3 4 6 12
// 6
// 1 2 3 4 5 6
//  Sample Output

// 2
// 0