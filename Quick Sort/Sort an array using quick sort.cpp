/* This function picks an element as pivot, places the pivot element at its correct position in sorted array, and places all smaller (smaller than pivot) 
   to left of pivot and all greater elements to right of pivot */
int partition (int arr[], int l, int h) {
  int r = (rand() % (h - l + 1)) + l;
//  int r = random(l,r);
  swap(arr[h], arr[r]);
  int pivot = arr[h];
  int j = l;
  for(int i=l ; i<=h ; i++)
  {
    if(arr[i] <= pivot)
    {  swap(arr[i], arr[j]);
    j++;
    }
  }
  return j-1;
}
/* low is for left index and high is right index of the sub-array of arr to be sorted */
void quickSort(int arr[], int l, int h) {
  if(l<h)
  {
  	int pivot_index = partition(arr, l, h);
    quickSort(arr, 0, pivot_index-1);
    quickSort(arr, pivot_index+1 , h);
  }
}

// Sort an array using quick sort
// Given an array of N integers, sort them in ascending order using quick sort (a divide and conquer approach). It picks an element as pivot and partitions the given array around the picked pivot element recursively. Write the two functions quickSort() and partition(), in which the quickSort() choose an pivot using partition() function and calls itself on the two parts of array before and after the pivot element.

// Input Format

// First line contains the number of elements
// Second line contains the elements of array separated by space.
// Output Format

// Print the elements of sorted array in ascending order.
// Constraints

// 1 <= N <= 10^5
// -(10^9) <= arr[i] <= 10^9
// Sample Input

// 7
// 1 3 5 7 2 4 9
// Sample Output

// 1 2 3 4 5 7 9
