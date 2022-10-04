#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    vector<vector<int>>a(n, vector<int>(n));
    for(int i = 0 ; i<n ; i++)
    {
     	for(int j =0 ; j<n ; j++)
          cin>>a[i][j];
    }
    for(int i=0 ; i<n ; i++)
    {
      int j;
      for( j = n-1 ; j>=1 ;j--)
      {
        cout<<a[j][i]<<" ";
      }
      cout<<a[j][i];
      cout<<endl;
    }
    cout<<endl;
  }
   return 0;
}

// Rotate a 2-D array by 90 degrees
// Given a two dimensional N*N array, print the output if the array is rotated by 90 degrees in clockwise direction.

// ﻿Input Format

// First line of input will contain a number T = no. of test cases. 
// Each test case will contain one line with number N (N*N is the size of the array). Next N lines will each contain N integers separated by space.
// Output Format

// For each test-case, print the array rotated clockwise by 90 degrees. Each row of an array should be printed as m elements separated by exactly one space. 
// There should be no space after last element in each row. Print an extra line after output for each test case.
// Constraints

// 1 <= T <= 10
// 1 <= N <= 50
// 0 <= arr[i][j] <= 100
// Sample Input

// 3  // Test Cases
// 3    // N (testcase 1)
// 1 2 3
// 4 5 6
// 7 8 9
// 2    // N (testcase 2)
// 2 4
// 1 3
// 1    // N (testcase 3)
// 14
// Sample Output

// 7 4 1
// 8 5 2
// 9 6 3

// 1 2
// 3 4

// 14
