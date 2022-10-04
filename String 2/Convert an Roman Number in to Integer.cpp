map<char, int>mp = { {'I',1},{'V',5}, {'X',10},{'L', 50}, {'C', 100}
,{'D',500}, {'M',1000}};
int romanToInt(string str) {
    int n = str.length();
    int ans = mp[str[n-1]] ;
  //cout<<mp['M']<<endl;
    for(int i=n-2 ; i>=0; i--)
    {
      if(mp[str[i]] < mp[str[i+1]])
        ans -= mp[str[i]];
      else
        ans += mp[str[i]];
    }
    return ans;
}

// Convert an Roman Number in to Integer
// Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000
// For example, two is written as II in Roman numeral, just two one's added together. Eleven is written as, XI, which is simply X + I. The number twenty eight is written as XXVIII, which is XX + V + III.

// Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

// I can be placed before V (5) and X (10) to make 4 and 9. 
// X can be placed before L (50) and C (100) to make 40 and 90. 
// C can be placed before D (500) and M (1000) to make 400 and 900.
// Your task is that given a roman numeral, convert it to an integer. Input is guaranteed to be within the range from 1 to 3999.

// Example 1:

// Input: "IV"
// Output: 4
// Example 2:

// Input: "LVIII"
// Output: 58
// Explanation: L = 50, V= 5, III = 3.
// Example 3:

// Input: "MCMXCIV"
// Output: 1994
// Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
// Sample Input

// 2  // no. of test cases
// LVIII
// MCMXCIV
// Sample Output

// 58
// 1994
