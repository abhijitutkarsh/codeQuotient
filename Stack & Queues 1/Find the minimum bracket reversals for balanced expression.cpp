int minReversal(char* expr){
  stack<int>s;
  int i = 0;
  while(expr[i]!= NULL)
  {
    if(!s.empty() and expr[i] == ']' and s.top()=='[')
      s.pop();
    else
      s.push(expr[i]);
    i++;
  }
  if(i%2 !=0) return -1;
  int countStack = s.size();
  float n =0;
  while(!s.empty() and s.top()=='[')
  {
   n++;
    s.pop();
  }
 float m = countStack - n;
//  cout<<m<<" "<<n<<endl;
  return (ceil(m/2)+ceil(n/2));
}

////////////////////////////////////efficient

int minReversal(char* expr){
	float open =0 , close = 0;
  int i =0;
  while(expr[i] != NULL)
  {
    if(expr[i] == '[')
      open++;
    else {
      if(open==0 and expr[i]==']')
        close++;
      else
        open--;
    }
    i++;
  }
  if(i%2) return -1;
  return ceil(open/2)+ceil(close/2);
 }

//  Find the minimum bracket reversals for balanced expression
// Given an expression having only square brackets ‘[‘ and ‘]’. Find the minimum number of brackets reversals required to make the expression balanced. If expression cannot be made balanced, print -1 and if it is already balanced, print 0.

// Input Format

// The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. 
// Each test case contains an expression consisting of square brackets only.
// Output Format

// The output for each test case will be the minimum number of bracket reversals required to make the expression balanced if possible.
// Sample Input 1

// 2
// []
// ][
// Sample Output 1

// 0
// 2
// Explanation 1

// First expression is already balanced, so print 0.
// Second expression requires 2 reversals (both the brackets needs to be changed as []) so prints 2.
// Sample Input 2

// 1
// [[[[
// Sample Output 2

// 2
// Sample Input 3

// 1
// [[[[[
// Sample Output 3

// -1