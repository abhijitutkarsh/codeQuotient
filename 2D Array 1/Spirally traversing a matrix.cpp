void printSpiral(int a[ROWS][COLS], int r, int c) {
  int left =0, right = c-1;
  int top = 0 , down = r-1;
  int point = 0;
  while(left<= right and top <= down){
    if(point == 0 )
  {
    for(int i = left ; i<=right ;i++)
    {
      cout<<a[top][i]<<endl;
    }
      top = top +1;
      point =1;
  }
    else
    if(point == 1)
    {
      for(int i = top ; i<=down ; i++ )
      {
        cout<<a[i][right]<<endl;
      }
      right = right - 1;
      point =2;
    }
    else
  	if(point == 2)
    {
      for(int i = right ; i>=left ; i--)
      {
        cout<<a[down][i]<<endl;
      }
      down = down -1;
      point =3;
    }
    else
  if(point == 3)
  {
    for(int i =down ; i>=top; i--)
    {
      cout<<a[i][left]<<endl;
    }
    left = left + 1;
    point =0;
  }  	
 }  
}

// Spirally traversing a matrix
// Traversing an array is an elementary operation on an array, in which each element will be processed for some operation. Printing elements is one example operation.

// Complete the function printSpiral() given in the editor, which accepts a two dimensional array and prints the array in spiral form rotating clockwise.

// Input Format

// Each test-case will begin with two number m and n where m = no. of rows and n = no. of columns.
// m rows will follow with n integers in each row separated by a space. 
// Constraints

// 1<=m<=50 and 1<=n<=50.
// Output Format

// For each test case, print the elements of 2-d array in spiral form starting from index (0,0) or upper-left corner in clockwise direction.
// Sample Input 1

// 3 3
// 4 5 6
// 7 8 9
// 10 11 12

// Sample Output 1

// 4
// 5
// 6
// 9
// 12
// 11
// 10
// 7
// 8
// Sample Input 2

// 3 4
// 4 3 2 1
// 5 7 8 11
// 2 4 6 8
// Sample Output 2

// 4
// 3
// 2
// 1
// 11
// 8
// 6
// 4
// 2
// 5
// 7
// 8