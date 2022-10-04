int keywordCount(string str, string word) {
    int n = str.length();
    int m = word.length();
    int count=0;
  for(int i  = 0 ; i<n ; i++)
  {
    int mismatch = 0;
    if(str[i] != ' ')
    {
        for(int j =0; j<word.length(); j++)
        {
            if(i<n and j<m and (str[i] == word[j]) )
            i++;
            else
            {
            mismatch = 1;
            break;
            }
        }
        if(mismatch == 0 and (str[i] == ' ' or i == n) )
        count++;
        else{
        while(i<n and str[i] != ' ')
        i++;
        }
       // cout<<i<<endl;
    }
//    cout<<i<<endl;
  }
  return count;
}

// Keyword Count
// Given a string that contains lowercase and uppercase alphabets, along with the space character. Also given a word, count how many times the given word occurs in the given string.

// Note: A word is a sequence of characters without any space.

// Input Format:

// The first line of input contains an integer T denoting the no of test cases.
// Each test case will contain the following two lines:
//   First line contains a string that may also contain space characters.
//   Second line contains a word.
// Output Format:

// Print the number of times the given word occurs in the given string.
// Constraints:

// 1 <= T <= 10
// 0 < length of string, word < 10^5
// Sample Input

// 2  // Test Cases
// abcd abc Xyz                 // string (TC-1)
// abc                          // word (TC-1)
// Code Quotient CoDE and CoDE  // string (TC-2)
// CoDE                         // word (TC-2) 
// Sample Output

// 1
// 2
// Explanation

// Test Case 1:
// Word "abc" occurs only one time in the given string "abcd abc Xyz".

// Test case 2:
// Word "CoDE" occurs two times in the given string "Code