#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
// Include headers as needed
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n1,m1;
    vector<vector<int>>ans;
    cin>>n1>>m1;
    vector<vector<int>>v1(n1,vector<int>(m1));
	 for(int i=0 ; i<v1.size();i++)
    {
      for(int j =0 ; j<v1[0].size(); j++)
      {
        cin>>v1[i][j];
      }
    }
    int n2, m2;
    cin>>n2>>m2;
    vector<vector<int>>v2(n2,vector<int>(m2));
   for(int i=0 ; i<v2.size();i++)
    {
      for(int j =0 ; j<v2[0].size(); j++)
      {
		cin>>v2[i][j];
      }
    }
    if(n2 == m1)
    {
      for(int i = 0 ; i<n1 ; i++)
      {
        vector<int>temp;
        for(int j =0 ; j<m2 ; j++)
        {
          int sum =0 ;
          for(int k =0 ; k<m1 ; k++)
          {
            sum+= v1[i][k]*v2[k][j];
          }
          temp.push_back(sum);
        }
        ans.push_back(temp);
      }
    }
    else
    continue;
    // cout<<ans[0].size()<<endl;
  for(int i=0 ; i<ans.size();i++)
    {
      for(int j =0 ; j<ans[0].size(); j++)
      {
        cout<<ans[i][j]<<" ";
      }
      cout<<endl;
    }
  }
    return 0;
}

// Matrix Multiplication
// Given two matrices A and B in the form of two dimensional arrays, find the dot product of these two matrices.



// Input Format:

// First line of input will contain an integer T = no. of test cases.
// Each test case will follow in multiple lines. First line of each test case will contain two integers R1 = no. of rows in matrix A and C1 = no. of columns in matrix A. Next R1 lines will each contain C1 space separated integers. Next line again contain two integers R2 = no. of rows in B and C2 = no. columns in B. C1 will be equal to R2.
// Output Format:

// For each test case print matrix of size R1*C2 in R1 lines with each line containing C2 space separated integers of corresponding row.
// Constraints

// 1 <= T <= 1000
// 1 <= R1, C1, R2, C2 <= 50
// C1 will be equals to R2
// Sample Input

// 2  // Test Cases
// 2 3    // R1 C1 (testcase 1)
// 1 2 3  // matrix A
// 4 5 6
// 3 2    // R2 C2
// 2 3    // matrix B
// 1 2
// 2 1
// 2 2    // R1 C1 (testcase 2)
// 12 4   // matrix A
// 7 6
// 2 3    // R2 C2
// 2 4 6  // matrix B
// 3 5 7
// Sample Output

// 10 10  // A * B (testcase 1)
// 25 28
// 36 68 100  // A * B (testcase 2)
// 32 58 84