// Merges two subarrays of arr[]. 
// First subarray is arr[l..m] and Second subarray is arr[m+1..r] 
void merge(int array[], int l, int m, int r) {
  int n1 = m- l+1;
  int n2 = r-m;
  int left[n1], right[n2];
  for(int i =0 ; i<n1 ; i++)
  {
    left[i] = array[l+i];
  }
  for(int i= 0 ; i<n2 ; i++)
  {
    right[i] = array[m+1+i];
  }
  int i =0 , j =0,k =l;
  while(i<n1 and j<n2)
  {
    if(left[i] <= right[j])
      array[k++] = left[i++];
    else
      array[k++] = right[j++];
  }
  while(i<n1)
  {
    array[k++] = left[i++];
  }
  while(j<n2)
  {
    array[k++] = right[j++];
  }
}
/* l is for left index and r is right index of the sub-array of arr to be sorted */
void mergeSort(int array[], int l, int r) {
  if(l<r )
  {
    int m = (l+r)/2;
    mergeSort(array, l, m);
    mergeSort(array, m+1, r);
    merge(array, l, m, r);
  }
}


// Sort an array using merge sort
// Given an array of N integers, sort them in ascending order using merge sort (a divide and conquer approach). Merge sort cut the array in two halves, calls itself on these halves and then merge the two sorted halves recursively to make the whole array sorted. Write the two functions mergeSort() and merge(), in which the mergeSort() divides array in half and calls it recursively and merge() will merge the two sorted arrays given as parameters.

// Input Format

// First line contains the number of elements
// Second line contains the elements of array separated by space.
// Output Format

// Print the elements of sorted array in ascending order.
// Constraints

//   1 <= N <= 10^5
//  -(10^9) <= arr[i] <= 10^9
// Sample Input

// 7
// 1 3 5 7 2 4 9
// Sample Output

// 1 2 3 4 5 7 9