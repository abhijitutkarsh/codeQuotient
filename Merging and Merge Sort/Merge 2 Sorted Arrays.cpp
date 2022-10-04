int* mergeArrays(int a[], int b[], int asize, int bsize) {
  // Write your code here
 int* c = new int[asize+bsize];
  int i =0 , j =0 , k =0;
	while(i<asize and j<bsize)
    {
      if(a[i]<=b[j])
        c[k++] = a[i++];
      else
        c[k++] = b[j++];
    }
  while(i<asize)
    c[k++] = a[i++];
  while(j<bsize)
    c[k++] = b[j++];
  return c;
}
//////////////////////////////
int* mergeArrays(int a[], int b[], int asize, int bsize) {
  // Write your code here
 int* c = new int[asize+bsize];
  int k=0;
  for(int i =0; i<asize; i++)
    c[k++]= a[i];
  for(int i =0; i<bsize; i++)
    c[k++]= b[i];
  sort(c, c+asize+bsize);
  return c;
}



// Merge 2 Sorted Arrays
// Write a function mergeArrays which should merge two sorted arrays A and B to create one single sorted array.

// If the number of elements initialized in A and B are m and n respectively, the resulting size of merged array after your code is executed should be m + n

// Example :

// Input :
// A : [1 5 8]
// B : [6 9]
// Merged Array : [1 5 6 8 9]
// Sample Input

// 4        // Size of 1st array
// 1 2 3 6  // Elements of 1st array
// 3        // Size of 2nd array
// 4 5 7    // Elements of 2nd array
// Sample Output

// 1 2 3 4 5 6 7