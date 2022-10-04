/* pop(),push(int j) already defined in stack */
#include<bits/stdc++.h>
//#include<string>
int evalPostfix(CQStack *stack,string exp){
    int i, op1, op2, answer;
while(exp[i])  {
    // If the scanned character is an operand (number here), push it to the stack.
   if(exp[i]=='*' or exp[i]=='+' or exp[i] =='/' or exp[i]=='-' or
              exp[i]=='^')
    // If the scanned character is an operator, pop two elements from stack apply the operator
    {
      op2 = stack->pop();
      op1 = stack->pop();
      switch (exp[i])
      {
        case '+': stack->push(op1 + op2); break;
        case '-': stack->push(op1 - op2); break;
        case '*': stack->push(op1 * op2); break;
        case '/': stack->push(op1 / op2); break;
        case '^': stack->push(pow(op1,op2)); break;
      }
    }
        else
      stack->push(exp[i] - '0');
  i++;
  }
  answer = stack->pop();
  return answer;
}


// Evaluate the postfix expression using Stack
// Given a postfix expression, evaluate it using stack and print the final output.

// Input Format

// The first line of input contains an integer T denoting the number of test cases. 
// The next T line contains a postfix expression.
// An expression in postfix form will consist of all digits and following five operators: +, -, *, /, ^
// Output Format

// Print the final output of postfix expression evaluation in new line for each test case.
// Sample Input

// 2  // Testcases
// 8425+-*
// 546+*493/+*
// Sample Output

// -24
// 350
// Explanation

// Testcase 1 will be evaluated as: 
// 8 * (4 - (2 + 5)) = -24

// Testcase 2 will be evaluated as:
// (5 * (4 + 6)) * (4 + (9 / 3)) = 350