// Return true if the creatures belong to the same species, else return false
bool belongToSameSpecies(string str1,string str2) {
  int j =0 ;
  int flag =0;
  for(int i =0; i<str1.length(); i++)
  {
    if(str1[i] == str2[j])
    {
      j++;
      continue;
    }
  }
 // cout<<j<<endl;
  if(j == str2.length())
    return true;
  else
    return false;
}

// Same Species OR Not
// Scientists have found two creatures frozen in Siberia. The first one is around 5000 yrs old, and the second one is 2000 yrs old. Now they want to determine whether the two creatures belong to the same species or not, so for that scientists have done DNA sequencing of the both. Now if the DNA string of 2nd creature comes out to be a subsequence of 1st creature's DNA string, then they belong to the same species otherwise not. A subsequence of a string is defined as a string that can be obtained by deleting any number of characters from the original string.

// Complete the function belongToSameSpecies(DNA_str1, DNA_str2) that accepts two strings as parameters, and returns true if the creatures belong to the same species, else returns false.

// Input Format

// The first line of input contains an integer T denoting the no of test cases . Then T test cases follow. 
// Each test case contains a single line of input which contains two strings seperated by a space. 
// Output Format

// For each test case, print YES if the two creatues belong to the same species, else print NO, in new lines.
// Constraints

// 1 <= T <= 10
// Given strings consist of uppercase and lowercase English letters.
// Sample Input

// 3
// CodeQuotient CQti
// CodeQuotient QCa
// Hello Hi
// Sample Output

// YES
// NO
// NO