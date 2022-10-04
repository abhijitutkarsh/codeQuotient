int lastIndexofK(int arr[], int n, int k) {
  // Write Your Code Here
  int l = 0 , r = n-1;
  while(l<=r)
  {
    int mid = (l+r)/2;
    if(arr[mid] == k)
    {
      if(mid+1 <= r and arr[mid+1] == k)
        l =mid+1;
      else
        return mid;
    }
    else
      if(arr[mid]<k)
        l = mid+1;
    else
      r = mid -1;
  }
  return -1;
}

// Find the last occurence of an element in an array
// Given a sorted list of integers, find the position of last occurrence of a given number K in the array.

// Input Format

// First line will contain two positive integer N = number of elements in array and K. 
// Next line will contain N space separated integers in increasing order.
// Output Format

// For each test case, print on a single line the index of last occurrence of K in the list on 0-based index. Print -1 if you cannot find K in the list.
// Constraints

//   1 <= N <= 10^9
//  -(10^9) <= K <= 10^9
//  -(10^9) <= arr[i] <= 10^9
// Sample Input

// 10 4
// 1 2 4 4 4 4 5 8 9 10
// Sample Output

// 5
