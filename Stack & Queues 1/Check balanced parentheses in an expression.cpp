bool areBracketsBalanced(char exp[]) {
  // Write your code here
  stack<char>s;
  int i=0;
while(exp[i]!= NULL)  {
    if(exp[i] == '(' or exp[i] == '{' or exp[i] == '[')
      s.push(exp[i]);
    else if(!s.empty())
    {if( s.top()=='(' and exp[i] == ')')
      s.pop();
     else if(s.top()=='{' and exp[i] == '}' )
      s.pop();
     else if(s.top()=='[' and exp[i] == ']' )
      s.pop();
    }
  else if(s.empty() and exp[i] == ')' or exp[i] == '}' or exp[i] == ']')
    return false;
    i++;
  }    
  if(s.empty()) return true;
  else
    return false;
}

// Check balanced parentheses in an expression
// Given an expression only containing upper-case alphabets: A-Z, operators: /, * , +, - and characters: (,),{,},[,] used to mark start and end of parentheses, validate whether the parentheses are balanced or not.

// Examples:

// ()    ==>  YES
// )(    ==>  NO
// (2+2) ==> YES
// {3+(2+5)} ==> YES
// {} ==> YES
// (3*4+(6) ==>  NO
// ({2+5)} ==>  NO
// Input Format:

// A string with alphanumeric characters or one of the characters '{', '}', '(','),'[' or ']'.
// Output Format:

// For each test case print "YES" if the string has balanced parentheses, else print "NO"
// Sample Input 1

// ()
// Sample Output 1

// YES
// Explanation 1

// The String is balanced
// Sample Input 2

// )(
// Sample Output 2

// NO
// Explanation﻿ 2

// The string is not balanced