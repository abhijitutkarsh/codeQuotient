// Removal of Duplicates from a Sorted Array
// Write a function removeDuplicates() which receives a array as input and remove the duplicate elements from the array. After the function call, the array will contain a set of unique elements..

// Suppose the array contains the following values:

// {7, 7, 18, 18, 18, 18, 21, 39, 39, 42, 42, 42}
// After a call to removeDuplicates(arr, size); , the array should store the following values:

// {7, 18, 21, 39, 42}
// If the array is empty or does not contain any duplicate values, calling your function should have no effect.

// Input Format

// First line contains the number of elements in array N.
// and N integers will follow in next N lines.
// Output Format

// Print the non-duplicate elements of array.
// Constraints

//   1 <= N <= 10^5
//  -(10^9) <= arr[i] <= 10^9
// Sample Input

// 5  // No. of elements
// 1
// 1
// 2
// 3
// 3
// Sample Output

// 1
// 2
// 3

void removeDuplicates(int arr[], int *size) {
  int v[*size];
  v[0] = arr[0];
  int j =1;
  for(int i =1 ; i<*size ; i++)
  {
    if(arr[i] !=arr[i-1])
      v[j++] = arr[i];
  }
  for(int i = 0  ; i<=j ; i++)
    arr[i] = v[i];
  *size = j;
}