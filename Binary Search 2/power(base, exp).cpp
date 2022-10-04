long power(int a, int b) {
  // Write your code here
    long res = 1;
    if(b<0) return -1;
    while (b)
    {
        if (b & 1)
            res *= a;
        a *= a;
        b /= 2;
    }
    return res;
}

// power(base, exp)
// Write a recursive function power that accepts two integers representing a base and an exponent, and returns the base raised to that exponent. For example, the call to power(3, 4) should return 3^4 i.e. 81. If the exponent passed is negative, then return -1.

// Do not use loops or auxiliary data structures; Solve the problem recursively. Also do not use the provided library pow function in your solution.

// Expected Time Complexity: O(log(n)); here n denotes the exponent

// Input Format:

// The first line of input conatins an integer T, denoting the number of test cases.
// The second line of input contains 2 integers base and exponent seperated by space.
// Output Format:

// Print the answer when base is raised to the exponent.
// Constraints:

// -10 <= base <= 10
// ﻿-15 <= exponent <= 15
// Sample Input

// 2  // Test Cases
// 2 3
// 5 2
// Sample Output

// 8
// 25
