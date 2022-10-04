int totalWater(int arr[], int n) {
	int res =0;
  //int leftH =0 , rightH =0;
  vector<int>leftH(n), rightH(n);
  for(int i =1 ; i<n ; i++)
  {
    leftH[i] = max( leftH[i-1] , arr[i-1] );
  }
  for(int i =n-2 ; i>=0 ; i--)
  {
    rightH[i] = max(rightH[i+1] , arr[i+1]);
  }
  for(int i = 0; i<n ; i++)
  {
    int ans = min(leftH[i],rightH[i]);
    if(ans > arr[i])
    {
      res += ans -arr[i];
    }
  }
  return res;
}

// Trapping rain water
// Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining. For example,

// if input is {2, 0, 1}, then the following situation depicts the elevation:

// |
// |_|
// So we can store only 1 unit of water in this whole map. whereas if input is {3, 0, 0, 2, 0, 2}, then the elevation map is:

// |		
// |   | |
// |_ _|_|
// So we can store 2+2+2 = 6 units of water in it.

// Complete the function totalWater() that accepts an array and returns the total water that can be trapped.

// Input Format:

// First Line will contain an integer N denoting the number of elements.
// Second line contains N integers separated by space.
// Constraints:

// 1 <= N <= 10^5
// 0 <= arr[i] <= 10^9
// Output Format:

// Print the total units of water trapped.
// Sample Input

// 6
// 3 0 0 2 0 2
// Sample Output

// 6
