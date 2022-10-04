// ACID
// 0123
// 6
bool checkVowel(char c)
{
    if(c == 'a' or c == 'e' or c == 'i' or c == 'o' or c =='u' or
       c == 'A' or c == 'E' or c == 'I' or c == 'O' or c =='U' 
      )
    return true;
    return false;
}
int countVowelSubstr(string str) {
  int n = str.length();
int count =0;
  for(int i=0 ; i<str.length() ; i++)
    {
    	if(checkVowel(str[i]))
        {
          count= count%10007 + n%10007 -i%10007;
        }
    }
    return count%10007;
  }

//   Vowel Substrings
// Given a string, count the number of substrings in it which starts from a vowel (‘a’, ‘e’, ‘i’, ‘o’, ‘u’, ‘A’, ‘E’, ‘I’, ‘O’, ‘U’).

// As the number of the substrings can be very large, print the count modulo(%) 10007.

// Input Format:

// First line contains a string.
// Output Format:

// Print a single integer X % 10007, where X is the number of substrings in the given string that starts from a vowel.
// Constraints:

// 1 <= lengthOf(string) <= 10^6
// Sample Input

// ACID
// Sample Output

// 6
// Explanation:

// For str = “ACID”, the following are the 6 substrings that start from a vowel.
// A, AC, ACI, ACID, I, ID
// Therefore, the answer would be 6 % 10007 = 6