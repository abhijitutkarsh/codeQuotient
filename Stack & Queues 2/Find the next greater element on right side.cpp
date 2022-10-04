//void printNextGreaterElement(int arr[],int n){
  // Write your code here
void printNextGreaterElement(int arr[],int n){
	stack<int>s;
  map<int,int>mp;
 s.push(arr[0]);
  for(int i =0; i<n; i++)
  {
    while( !s.empty() and arr[i] >  s.top())
    {
      mp[s.top()] = arr[i];
      s.pop();
    }
    s.push(arr[i]);
  }
  //cout<<s.top();
   while(!s.empty())
    {   mp[s.top()] = -1;
    	s.pop();
  }
  for(int i =0 ; i<n ; i++){
    cout<<mp[arr[i]]<<" ";
  }
}


// Find the next greater element on right side
// Given an array having distinct integer elements, the task is to find the first next greater element on right side for each element of the array. If no such element exists, output -1.

// Complete the function printNextGreaterElement() which accepts the array as an argument amd prints the next greater element of each element of array seperated by a space



// Input Format

// The first line of input contains a single integer T denoting the number of test cases. Then T test cases will follow.
// The first line of each test case contains an integer N denoting the size of the array. The next line of each test case contains N positive integers denoting the elements of the array.
// Output Format

// For each test case, print the next greater element on right side for each element separated by space in new lines.
// Sample Input

// 1
// 4
// 1 2 3 4
// Sample Output

// 2 3 4 -1
// Explanation

// Next greater elements on right side is printed, for last element -1 is printed.