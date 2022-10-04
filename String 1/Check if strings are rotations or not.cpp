// return 1 for YES and 0 for NO.
int isRotation(string str1, string str2) {
  if(str1.length() != str2.length())
    return false;
  string s= str1 + str1;
  for(int i =0 ; i<s.length() ; i++)
  {
    string p ="";
    if(str2[0] == s[i]){
    for(int j =i,k=0 ; j<i+str2.length(),k<str2.length(); j++,k++)
    {
      if(s[j]!= str2[k])
        break;
      p+= s[j];
    }
    }
    if(str2 == p)
      return true;
  }
  return false;
}

// Check if strings are rotations or not
// Given two strings, find whether both are rotations of each other or not. For example,

// Given str1 = abacd and str2 = acdab, we can get str1 by rotating str2 and,

// Given str1 = coder and str2 = cored, we can not get str1 by rotating str2.

// ﻿Input Format

// The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains two strings str1 and str2. 
// Output Format

// For each test case, print YES or NO in new lines.
// Sample Input

// 2  // Test Cases
// abacd  // testcase 1
// acdab
// coder  // testcase 2
// cored
// Sample Output

// YES
// NO