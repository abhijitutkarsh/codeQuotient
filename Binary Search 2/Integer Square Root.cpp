int sqrt(long n) {
  // Write your code here
  long long i = 0, j=n;
  long long ans =0;
  while(i<=j)
  {
    double mid = i+ ((j-i)/2);
   if(mid*mid == n ) return mid;
    if(mid*mid > n) 
    {
      j = mid -1;
    }else
    {
      ans = mid ;
     i= mid+1;
    }
  }
  return ans;
}

// Integer Square Root
// Given a positive number n, devise an algorithm to compute its integer square root. For example, the square root of 20 lies between 4 and 5, so we need to consider its floor value as the answer, i.e. 4.

// Do not use any in-built function to calculate square root.

// Input Format:

// First line will contain T = number of test case, next T lines will contains a positive integer n.
// Output Format:

// For each test case, calculate and print the square root of n. If n is not a perfect square, then print floor(√n).
// There should be no space after printing each element.
// Constraints:

// 1 <= T <= 100
// 1 <= n <= 10^15
// Sample Input

// 6  // Test Cases
// 36
// 16
// 9
// 20
// 1
// 11
// Sample Output

// 6
// 4
// 3
// 4
// 1
// 3