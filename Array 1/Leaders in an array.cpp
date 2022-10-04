// Leaders in an array star_border
// Given an array, you have to print the LEADER elements of it. An element is called LEADER if it is greater than all the elements to its right side, note that the rightmost element is always a leader.

// For example in the array {12, 27, 14, 11, 25, 6, 7}, leaders are 27, 25 and 7.

// Complete the function findTheLeaders() that accepts the array and returns the array that contains the leaders

// Input Format

// First Line will contain an integer N denoting the size of array.
// Second line contains N integers separated by space as elements of array.
// Output Format

// Print the leader elements separated by space.
// Constraints

// 1 <= N <= 10^5
// -(10^9) <= arr[i] <= 10^9
// Sample Input

// 7
// 12 27 14 11 25 6 7
// Sample Output

// 27 25 7

vector<int> findTheLeaders(vector<int> arr) {
	vector<int>a;
  	a.push_back(arr[arr.size()-1]);
 	int maxi = arr[arr.size()-1];
  	for(int i = arr.size()-2 ; i>=0 ; i--)
    {
     	maxi = max(maxi, arr[i]);
      	if(maxi == arr[i])
          a.push_back(maxi);
    }
  reverse(a.begin(),a.end());
  return a;
}