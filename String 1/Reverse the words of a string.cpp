string reverse(string s)
{
  int i=0 , j =s.length()-1;
  while(i<j)
  {
    swap(s[i], s[j]);
    i++;
    j--;
  }
  return s;
}
void revWordsString(string str) {
  // Write your code here
//string ans ="";
  vector<string>v;
  for(int i =0; i<str.length(); i++)
    {
      int j=0;
      for( j=i+1 ; j<str.length();j++)
      {
        if(str[j] == ' ')
          break;
      }
      string temp = str.substr(i,j-i);
      temp = reverse(temp);
    //  cout<<temp<<endl;
    v.push_back(temp);
      i = j;
     // i++;
    }
  for(int i =0 ; i<v.size();i++)
  {
    if(i== v.size()-1)
    {cout<<v[i]; continue;}
    cout<<v[i]<<" ";
  }
}

// Reverse the words of a string
// A string is composing some words. These words are separated by some delimiter e.g. a space.

// Given a string (with space as a delimiter between words), reverse the words in the string individually, not the whole string.

// Complete the function revWordsString() which takes the string as parameter and reverse the individual words of string and print them.

// Input Format:

// The first line of input contains an integer T denoting the no of test cases. 
// Each test cases contains one line, which contains a string.
// Output Format:

// For each test case, print the resultant string in new lines.
// Sample Input

// 2
// Code Quotient Loves Code
// Hello Coders
// Sample Output

// edoC tneitouQ sevoL edoC
// olleH sredoC