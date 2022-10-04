int nthFibonacciTerm(int n, int m){
    // Complete the given function
  int arr[n+1];
  if(n==0)return 0;
  if(n==1)return 1;
  arr[0] = 0;
  arr[1] = 1;
  int i =2;
  for(i = 2 ; i<=n ; i++)
  {
    arr[i] = arr[i-1]%m + arr[i-2]%m;
  }
 // cout<<arr[n-1]<<endl;
  return arr[n]%m;
}

// Nth Fibonacci Number Modulo M
// Given 2 non negative integers n and m, find the nth fibonacci number modulo m.

// The nth fibonacci number Fn = Fn-1 + Fn-2 (n > 1), where F0 = 0 and F1 = 1.

// The Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, …....

// Input Format

// Input consists of 2 lines
// First line contains an integer that denotes n.
// Second Line contains an integer that denotes m.
// Output Format

// Print the nth fibonacci number % m. 
// Constraints:

// 0 <= n <= 150
// 1 <= m <= (10^9)+7
// Sample Input 1

// 4
// 8
// Sample Output 1

// 3
// Explanation:

// F4 = 3, therefore 3 % 8 = 3
//  Sample Input 2

// 7
// 6
// Sample Output 2

// 1
// Explanation:

// F7 = 13, therefore 13 % 6 = 1
