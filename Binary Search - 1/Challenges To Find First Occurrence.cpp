long binary(int n, int arr[], int k)
{
  long l =0 , r= n-1;
  while(l<=r)
  {
    long mid = (l+r)/2;
    if(arr[mid] == k)
    {
      if(mid-1 >= l and arr[mid-1] == k)
        r = mid -1;
      else
        return mid;
    }
    else if(arr[mid] < k)
      l = mid +1;
    else
      r = mid -1;
  }
  return -1;
}
long solveChallenges(int N, int arr[], int K, int challenges[]) {
  // Write your code here
  long sum = 0;
  for(int i = 0 ; i<K; i++)
  {
    int p = challenges[i];
    sum += binary(N, arr, p);
  }
  return sum;
}

// Challenges To Find First Occurrence
// Rajesh is playing an online game, in which he has to solve a series of challenges if he wants to win. The game is as follows: Given a list of N integers sorted in ascending order, and a series of K challenges. In each challenge, one integer X will be flashed on the screen, and the player needs to find the first occurrence of X in the given list. Finally, he has to sum up the result of all the K challenges, and enter the answer in the game's console. If the player's answer matches the expected output, then he wins the game.

// Rajesh needs your help to win this game, He wants you to write an algorithm that finds the first occurrence of K given integers in a sorted list, and then add those to get the final answer.

// Note: If a number X is not found in the list, then consider its first occurrence as -1.

// Example:

// N = 7, arr[N] = {2, 2, 4, 5, 5, 5, 6}

// K = 3, challenges[K] = {5, 2, 6}

// The First occurrence of 5, 2 and 6 is at index 3, 0, 6 respectively. Therefore, the final answer is 3 + 0 + 6 = 9.

// Input Format:

// First line of input will contain a positive integer N = number of elements in the list.
// Second line will contain N space separated integers in the increasing order.
// Third line will contain a positive integer K = number of challenges.
// Fourth line will contain K space separated integers, denoting the value of X for each challenge.
// Output Format:

// Print the final result, after solving K challenges.
// Constraints:

//   1 <= N <= 10^5
//  -1000 <= arr[i] <= 1000
//   1 <= K <= 10^5
//  -2000 <= challenges[i] <= 2000
// Sample Input

// 7                // N
// 2 2 4 5 5 5 6    // arr[]
// 3                // K
// 5 2 6            // challenges[]
// Sample Output

// 9
