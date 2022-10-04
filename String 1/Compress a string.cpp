string compressString(string str) {
  // Write your code here
  int n = str.length();
 string res = "";
  //int j =0;
  for(int i =0 ; i<str.length(); i++)
  {
    int count =1;
   res+= str[i];
    while(i+1<n and str[i+1] == res[res.length()-1])
    {
      count++;
      i++;
    }
    //j=i;
    if(count>1)
      res+= to_string(count);
  }
  return res;
}

// Compress a string
// Given a sorted string, compress all the similar letters from the string. For example, aabbccdef is a sorted string in which alphabets are in increasing order from a to z and will become a2b2c2def after compression of similar characters.

// Complete the function compressString(str) that will take the string as parameter and modify it as specified.

// Input Format:

// The first line of input contains an integer T denoting the no of test cases . Then T test cases follow. Each test case contains a string str. 
// Output Format:

// For each test case, print the new string in new lines.
// Sample Input

// 2
// aabbccdef
// abddddddd
// Sample Output

// a2b2c2def
// abd7