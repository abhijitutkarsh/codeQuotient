int findMaxProfit(vector<int> prices) {
 int rightmax = prices[prices.size()-1], profitmax = 0;
	for(int i  = prices.size()-2 ; i>=0 ; i--)
    {
      if(rightmax - prices[i] > profitmax)
        profitmax = rightmax - prices[i];
      if(prices[i] > rightmax)
        rightmax = prices[i];
    }
  return profitmax;
}

// When to buy and when to sell the stock
// Suppose, you are ready to buy and sell the shares of a company, and someone provides you the predicted rates of shares for next N days. If you are permitted to do one transaction (i.e. Buy and sell the stock thereafter) design an algorithm which will get the maximum profit for you.

// Note: You cannot sell a stock before you buy it.

// Complete the findMaxProfit() function below to return the maximum profit for given prices.

// Input Format

// First line of each test case contains the length of the array N.
// Next line contains N space separated elements where ith element is the price of a given stock on day i.
// Output Format

// Print the maximum profit after buying and selling a stock.
// Constraints

// 1 <= N <= 10^5
// 1 <= prices[i] <= 10^9
// Sample Input

// 6
// 7 1 5 3 6 4
// Sample Output

// 5
// Explanation:

// Since on 2nd day you can buy at Rs. 1 and sell on day 5 