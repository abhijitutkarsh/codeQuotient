/*     
 * Complete the 'canTransformed' function below.
 * @params
 *   a,b,c,d -> integers denoting the values of a,b,c,d respectively
 * @return
 *   1 if the numbers can be transformed, else 0
 */
#include<bits/stdc++.h>
int canTransformed(int a, int b, int c, int d) {
   while(c>=a and d>=b)
   {
     if(c == a and b == d)return 1;
     if(c>d)c-=d;
     else d-=c;
   }
  return 0;
}


// Can we transform the two numbers
// Given two numbers, you can replace any of them with their sum. this can be done any number of times to obtain a new pair each time.

// For example, starting with (1, 3), we can get (4, 3) or (1, 4), subsequently from (4, 3) we can get (7, 3) or (4, 7) and so on.

// You task is that given four numbers a, b, c, d, you have to check whether we can obtain (c, d) from pair (a, b) by performing some number of operations as defined above or not.

// Complete the function canTransformed(), which takes the four integers as parameters and return 1 if transformation possible and 0 otherwise.

// Sample Input:

// First line contains the number of test case i.e. T.
// Next T lines contains 4 numbers each i.e. a, b, c, d
// Sample Output:

// Print 1 or 0 for each test case in separate lines.
// Constraints:

// 1 ≤ a, b, c, d ≤ 1000
// Sample Input

// 2  // Test Cases
// 1 3 7 3
// 1 3 4 5
// Sample Output

// 1
// 0
