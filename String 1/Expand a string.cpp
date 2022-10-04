// Return the final string after expansion
string expandString(string str) {
  string s = "";
  int n = str.length();
  for(int i =0 ;i<str.length() ; i++)
  {
    if(str[i]>='a' and str[i]<='z')
    { s+=str[i];continue;}
    int count =0;
   	int subLength =0;
    int j= i;
    while(j<n and str[j]-'0'>=0 and str[j]-'0'<=9)
    {
      subLength++;
      j++;
    }
    string temp = str.substr(i, subLength );
    count = stoi(temp)-1;
    while(count--){
      s+= str[i-1];
    }
    i= j-1;
  }
  return s;
}

// Expand a string
// Given a compressed string, you need to expand it in its original form. For example, if a2b3c2de is the given string, then it will become aabbbccde after expansion.

// The integer value after an alphabet, in the given string, denotes how many times that alphabet should occur in the final string, and if there is no integer after an alphabet then it will occur only once.

// Note: The maximum length of the expanded string will not be greater than 1000.

// Input Format:

// The first line of input contains an integer T denoting the no of test cases. Then T test cases follow.
// Each test case contains a string.
// Output Format:

// For each test case, print the final string after expansion, in a new line.
// Sample Input

// 2
// g2k2gd3g4
// abd7
// Sample Output

// ggkkgdddgggg
// abddddddd﻿