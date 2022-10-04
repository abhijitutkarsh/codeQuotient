long binary(int N,int arr[],int k)
{
 long l =0 , r=N-1;
  while(l<=r)
  {
    long mid = (l+r )/2;
    if(arr[mid] == k)
    {
      if(mid+1<= r and arr[mid+1] ==k)
        l = mid+1;
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
long binary1(int N,int arr[],int k)
{
 long l =0 , r=N-1;
  while(l<=r)
  {
    long mid = (l+r )/2;
    if(arr[mid] == k)
    {
      if(mid-1>= l and arr[mid-1] ==k)
        r = mid-1;
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
  long sum = 0;
  //sort(arr,arr+N);
  for(int i = 0 ; i<K ; i++)
  {
    int p = challenges[i];
    long x = binary(N, arr, p);
    long y = binary1(N, arr, p);
//cout<<y;
   // cout<<x-y;
   // if((x ==0 and y!=0) or (x!=0 and y!=0) or (x!=0 and y==0))
if(x == -1 )
  continue;
    sum += x-y+1;
  }
  return sum;
}

// Solve Challenges To Win The Game
// Himanshu plays an online game where he has to solve several challenges to win. The game is as follows: Given a list of N integers sorted in ascending order, and a series of K challenges. In each challenge, one integer X will be flashed on the screen, and the player needs to find the count of X in the given list. Finally, he has to sum up the result of all the K challenges, and enter the answer in the game's console. If the player's answer matches the expected output, then he wins the game.

// Himanshu needs your help to win this game, He wants you to write an algorithm that finds the count of K given integers in a sorted list, and then add those to get the final answer.

// Example:

// N = 7, arr[N] = {2, 2, 4, 5, 5, 5, 6}

// K = 3, challenges[K] = {5, 2, 6}

// The count of 5, 2 and 6 is 3, 2, 1 respectively. Therefore, the final answer is 3 + 2 + 1 = 6.

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

// 6