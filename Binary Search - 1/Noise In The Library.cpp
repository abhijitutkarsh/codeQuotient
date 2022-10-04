long binary(int n, int arr[], int k)
{int high = 0;
 int low = n-1;
// int ans = -1;
 while(high <= low)
 {
  int mid = (high + low) / 2;
   if(arr[mid] == k)
   {
        return mid;
   }
   else if(arr[mid] > k)
   {
     high = mid + 1;
   }
   else {
     low = mid-1;
   }
 }
 return -1;
  }
long totalNoise(int N, int arr[], int K, int challenges[]) {
  // Write your code here
   long sum = 0;
  for(int i = 0 ; i<K; i++)
  {
    int p = challenges[i];
     int x =  binary(N, arr, p);
       if(x == -1)
       {
         sum += N;
       }
       else {
         sum +=x;
       }
  }
  return sum;
}


// Noise In The Library
// In a library, N books are kept on a horizontal shelf in the decreasing order of their IDs. Now assume that, in order to reach a book present at i'th index(consider 0-based indexing), it takes i steps from leftmost position, and each step generates 1 unit of noise in the library.

// Given an array, denoting the book IDs of N books in decreasing order. Assume that all the book IDs are different, your task is to calculate how much noise it will generate to reach K given books, every time starting from the leftmost position.

// Note: For searching a book that is not available, a person has to travel all the way to the end. Therefore, it requires N steps (where N is the total number of books).

// Example:

// N = 7, book_IDs[N] = {12, 10, 9, 8, 3, 2, 1}

// K = 3, booksToFind[K] = {9, 12, 2}

// For reaching the books with the following IDs: 9, 12 and 2, it will take 2, 0, 5 steps respectively. Therefore, the total noise generated will be 2 + 0 + 5 = 7 units.

// Input Format:

// First line of input will contain a positive integer N = number of books.
// Second line will contain N space separated integers, denoting the book IDs in decreasing order.
// Third line will contain a positive integer K = number of books to find.
// Fourth line will contain K space separated integers, denoting the book IDs for the books to be searched.
// Output Format:

// Print the total noise that will be generated to reach K given books.
// Constraints:

// 1 <= N <= 10^5
// 0 <= book_IDs[i] <= 10^6
// 1 <= K <= 10^5
// 0 <= booksToFind[i] <= 10^7
// Sample Input

// 7                // N
// 12 10 9 8 3 2 1  // book_IDs[]
// 3                // K
// 9 12 2           // booksToFind[]
// Sample Output

// 7
