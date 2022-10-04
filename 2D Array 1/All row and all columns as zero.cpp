void makeAllZero(int matrix[ROWS][COLS], int r, int c) {
  int x = 1;
  int y =1;
  for(int i =0 ; i<r ;i++)
  {
    if(matrix[i][0] == 0)
      x = 0;
  }
  for(int j =0 ; j<c ;j++)
  {
    if(matrix[0][j] == 0)
      y = 0;
  }
  for(int i =1 ; i<r; i++)
  {
    for(int j =1 ; j<c ; j++)
    {
      if(matrix[i][j] == 0)
      {
        matrix[i][0] =0;
        matrix[0][j] = 0;
      }
    }
  }
  for(int i = 1; i<r ; i++)
  {
    if(matrix[0][i] == 0)
    {
      for(int j =1 ; j<c ; j++)
      {
        matrix[j][i] = 0;
      }
    }
  }
  for(int j = 1; j<r ; j++)
  {
    if(matrix[j][0] == 0)
    {
      for(int i =1 ; i<c ; i++)
      {
        matrix[j][i] = 0;
      }
    }
  }
  /*
  for(int i =0 ; i<r; i++)
  {
    for(int j=0 ;  j<c; j++)
    {
      cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }*/
//  cout<<endl;
  if(x ==0)
  {
    for(int i =0 ; i<r; i++)
      matrix[i][0] = 0;
  }
  if(y ==0)
  {
    for(int j = 0 ; j<c ; j++)
    {
      matrix[0][j] = 0;
    }
  }
}

// All row and all columns as zero
// Given a matrix, you need to set every row that contains a 0 to all 0s and set every column that contains a 0 to all 0s.

// Leave other unaffected elements as it is and change only affected elements to 0s.

// Input Format:

// Each test-case will begin with two number m and n where m = no. of rows and n = no. of columns. m rows will follow with n integers in each row separated by a space. 
// Output Format:

// For each test case, print the elements of 2-d array after above effect.
// Constraints:

// 1 <= m <= 50
// 1 <= n <= 50
// 0 <= Mat[i][j] <= 100
// Sample Input 1

// 3 3
// 4 5 6
// 7 0 9
// 1 1 1
// Sample Output 1

// 4 0 6
// 0 0 0
// 1 0 1
// Sample Input 2

// 5 5
// 1 0 1 1 0
// 0 1 1 1 0
// 1 1 1 1 1
// 1 0 1 1 1
// 1 1 1 1 1
// Sample Output 2

// 0 0 0 0 0
// 0 0 0 0 0
// 0 0 1 1 0
// 0 0 0 0 0
// 0 0 1 1 0