/*     
 * Complete the 'pickMGifts' function below.
 * @params
 *   m -> number of childrens
 *   arr -> vector of integers denoting N boxes, each box containing different number of chocolates
 *
 * @return
 *   The minimum imbalance possible with N boxes and M children.
 */
int pickMGifts(int m, vector<int> arr) {
 sort(arr.begin(), arr.end());
	int n = arr.size();
  int ans = INT_MAX;
  //1 2 3 4 5
  int j = m-1;
  for(int i = 0 ; i<arr.size() , j<n; i++,j++)
  {
    ans = min(ans, arr[j] - arr[i]);
  }
  return ans;
}


// Gifts for everyone with no bias
// On the eve of Christmas, Santa has prepared N boxes of chocolates (each box may contains different number of chocolates). Now he wants to distribute them as 1 box each to M children, but to avoid the imbalance between their shares, he tries to pick those M boxes out of N, which will provide as possible as equal chocolates to them. For this, he will calculate the imbalance as

// max(b1, b2, b3, ... bm) - min(b1, b2, b3, ... bm) where bi denotes the number of chocolates in the ith box and i <= M
// Your task is to help Santa, find the minimum amount of imbalance that can be achieved.

// So complete the function pickMGifts() which takes an integer array of size N and an integer M to denote the number of children as parameters and return the minimum amount of imbalance possible with N packets and M children.

// Input Format:

// The first line contains an integer M, that denotes the number of children.
// The second line contains an integer N, that denotes the number of boxes.
// Next N lines contains an integer describing number of chocolates in each box.
// Output Format:

// Print the value of minimum possible imbalance.
// Constraints:

// 1 ≤ N ≤ 10^5
// 1 ≤ number of chocolates in any box ≤ 10^9
// 1 ≤ M ≤ N
// Sample Input

// 4    // Number of children
// 6    // Number of boxes
// 2
// 3
// 7
// 4
// 9
// 5
// Sample Output

// 3
// Explanation:

// Any subset of 4 items can be distributed among the four children.
// The minimum difference achievable uses boxes with 2,3,4