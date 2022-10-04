long solveQueries(int N, int arr[], int Q, int queries[]) {
  // Write your code here
  sort(arr,arr+N,greater<int>());
  int ans = 0;
  for(int i = 0  ; i<Q ; i++)
  {
   // cout<<arr[queries[i]-1]<<" ";
	ans+= arr[queries[i]-1];
  }
//  cout<<endl;
  return ans;
}


// Queries for K largest
// Given an array of N integers, and Q queries. Each query will contain a single integer K, and your task is to find the Kth largest element in the array. Finally, sum up the result of all the queries, and return it as the final answer.

// Example:

// N = 7, arr[N] = {6, 9, 2, 8, 4, 1, 7}

// Q = 3, queries[Q] = {1, 4, 2}

// The largest element is 9, the fourth largest element is 6, and the second largest element is 8. By adding all the three value we'll get the final result i.e. (9 + 6 + 8) = 23.

// Input Format:

// First line of input will contain a positive integer N.
// Second line will contain N space separated integers, denoting the array elements.
// Third line will contain a positive integer Q = number of queries.
// Fourth line will contain Q space separated integers.
// Output Format:

// Print the final answer after adding the result of all the queries.
// Constraints:

//   1 <= N <= 10^5
//  -10^5 <= arr[i] <= 10^5
//   1 <= Q <= 10^5
//   1 <= queries[i] <= N
// Sample Input

// 7                // N
// 6 9 2 8 4 1 7    // arr[]
// 3                // Q
// 1 4 2            // queries[]
// Sample Output

// 23
