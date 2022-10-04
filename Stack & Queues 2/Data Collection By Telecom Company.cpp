int collectData(int height[], int n) {
  // Write your code here
  stack<int>s;
  map<int, int>mp;
  s.push(0);
 for(int i =1 ; i<n ; i++)
 {
   while(!s.empty() and height[s.top()]<height[i])
   {
     mp[s.top()] = height[i];
     s.pop();
   }
   s.push(i);
 }
  while(!s.empty())
  {
    mp[s.top()] = -1;
    s.pop();
  }
  int ans =0;
  for(int i  = 0 ; i<n ; i++)
  {
    ans+= mp[i];
  }
  return ans;
}


// Data Collection By Telecom Company
// A telecom company wants to install mobile towers over N buildings which are present in a straight line. For this purpose, the company has started doing an inspection to collect specific data i.e. for each building they want to know the next tallest building on its right side, and if no tallest building exists on the right side they will mark the data as -1. Finally, for some data analysis they will sum up all the collected data.

// Given an array denoting the heights of N buildings, your task is to write an algorithm for the telecom company to help them collect the required data.

// For Example: If height[ ] = {2, 1, 4, 6, 5}, then for each building following data would be collected: {4, 4, 6, -1, -1}, and adding this data will give the final result i.e. 12.

// Complete the function collectData() which accepts the height array as an argument and returns the final processed data as per the above statement.

// Input Format

// The first line contains an integer N denoting the number of buildings.
// The second line contains N positive integers separated by space, denoting the height of each building.
// Output Format

// For each test case, print the final processed data.
// Constraints

// 1 <= N <= 10^5
// 1 <= height[i] <= 10^4
// Sample Input

// 4        // N
// 1 2 3 4  // height[]
// Sample Output

// 8
// Explanation

// For each building, the height of next tallest building on the right side is as follows:
// {2, 3, 4, -1}, Now adding this data gives the final result i.e. 8.