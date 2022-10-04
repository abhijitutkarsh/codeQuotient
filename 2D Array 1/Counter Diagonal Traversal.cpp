/*     
 * Complete the 'counterDiagonal' function below.
 * Print the counter diagonal traversal of the matrix, seperated by space
 * @params
 *   mat -> square matrix of size (n x n) 
 *   n -> integer denoting size of square matrix
 */
void counterDiagonal(int mat[N][N], int n) {
  for(int col = 0 ; col<n ;col++)
  {
    int i = 0 , j = col;
    while(i<n and j>=0)
    cout<<mat[i++][j--]<<" ";
  }
  for(int row = 1 ; row<n ; row++)
  {
    int i =row , j = n-1;
    while(i<n and j>=0)
      cout<<mat[i++][j--]<<" ";
  }
}

// Counter Diagonal Traversal
// Given a n x n square matrix, traverse the matrix along its counter diagonals and print the elements.

// For Example: The output for the below matrix will be: 1 2 4 3 5 7 6 8 9



// Input Format:

// First line contains a number n that denotes the no. of rows and no. of columns in the square matrix.
// Each of the next n lines will contain n space separated integers.
// Constraints:

//   1 <= n <= 10
//  -100 <= mat[i][j] <= 100
// Output Format:

// Print the elements of the given matrix in the counter diagonal order.
// Sample Input

// 3
// 1 2 3
// 4 5 6
// 7 8 9
// Sample Output

// 1 2 4 3 5 7 6 8 9
// Explanation:

// The elements along the counter diagonals of the matrix are in the following order:
// 1
// 2 4
// 3 5 7
// 6 8
// 9