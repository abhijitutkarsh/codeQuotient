/*     
 * Complete the 'specialIndex' function below.
 * @params
 *   arr -> An vector of integers
 *
 *  @return
 *    The index of an array such that the sum of elements at 
 *    lower indices is equal to the sum of elements at higher indices.
int specialIndex(vector<int> a ) {
  // Write your code here
  int n = a.size();
 if (n == 1)
        return (0);
    int forward[n] = { 0 };
    int rev[n] = { 0 };
    for (int i = 0; i < n; i++) {
        if (i) {
            forward[i] = forward[i - 1] + a[i];
        }
        else {
            forward[i] = a[i];
        }
    }
    for (int i = n - 1; i > 0; i--) {
        if (i <= n - 2) {
            rev[i] = rev[i + 1] + a[i];
        }
        else {
            rev[i] = a[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (forward[i] == rev[i]) {
            return i;
        }
    }
    return -1;
}*/
int specialIndex(vector<int> arr ) {
  int n = arr.size();
    int sum = 0; // initialize sum of whole array
    int leftsum = 0; // initialize leftsum
    /* Find sum of the whole array */
    for (int i = 0; i < n; ++i)
        sum += arr[i];
    for (int i = 0; i < n; ++i) {
        sum -= arr[i]; // sum is now right sum for index i
        if (leftsum == sum)
            return i;
        leftsum += arr[i];
    }
    /* If no equilibrium index found, then return 0 */
    return -1;
}

// Find the special index of array
// Complete the given function specialIndex() in the editor, which takes a number n and an array of n integers as the input, and returns the first(lowest) index i where the following conditions are satisfied:

// Sum of elements at lower indices(< i) = sum of elements at higher indices(> i)
// if the above condition does not hold for any index then output -1
// When i = 0, then the Sum of lower indices(< i) should be initialized to 0 and the Sum of higher indices(> i) should be initialized to A[1] + A[2] +A[3] ………A[n-1], where n is the size of the array. Similarly, when i = n-1, then the Sum of higher indices(> i) should be initialized to 0.
// Your task is to output the array index, such that the sum of elements at lower indices is equal to the sum of elements at higher indices.

// For example, if an array A is as A[0] = -5, A[1] = 3, A[2] = 7, A[3] = 4, A[4] = -2, A[5] = 5, A[6] = 2

// Then 3 is a valid answer, because: A[0] + A[1] + A[2] = A[4] + A[5] + A[6]

// ﻿Input Format

// The first line of input will contain an integer T, denoting the number of test cases.
// Each test case will contain two lines:
//   First line will contain an integer n, denoting the no. of array elements.
//   Second line will contain n space separated integers.
// Constraints

//   1 <= T <= 10
//   1 <= n <= 10^5
//  -10000 <= arr[i] <= 10000
// Sample Input

// 1  // Test Cases
// 7
// -5 3 7 4 -2 5 2
// Sample Output

// 3  // index number 