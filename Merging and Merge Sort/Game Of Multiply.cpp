int multiplyGame(int N) {
  // Write your code here
 // int arr[N+1] ;
  vector<int>arr(N+1,1);
  int val = -1;
  //memset(arr, 1, sizeof(arr));
  for(int i =1 ; i<=N; i++)
  {
    for(int j =i; j<= N ; j+= i  )
    {
      arr[j] *= val;
    }
    val--;
  }
  int count = 0;
  for(int i = 1; i<= N ;i++)
  {
  //  cout<<arr[i]<<" ";
    if(arr[i] < 0)
      count++;
  }
 // cout<<endl;
    return count;
}

///////////////////////////////efficient
// implement sqrt using binary search
int multiplyGame(int N) {
  // Write your code here
 return sqrt(N);
}




// Game Of Multiply
// There are N numbers, all of them are initially equal to 1. Now, you have to play a game in which there are N rounds.

// In the first round, you multiple every number with -1.

// In the second round, you multiple every second number with -2.

// In the third round, you multiple every third number with -3.

// .

// .

// .

// For the ith round, you multiple every ith number with -i.

// For the Nth round, you multiple the Nth number(i.e. the last number) with -N.

// Return the count of numbers which are less than zero, after N rounds.

// Input Format:

// First line contains T that denotes the number of test cases. This is followed by T lines, each containing an integer N.
// Output Format:

// For each test case, print an integer in a new line, that denotes the count of numbers which will be less than zero after N rounds.
// Constraints:

// 1 <= T <= 1000
// 0 <= N <= 10^9
// Sample Input

// 2   // Test Cases
// 4   // N (test case 1)
// 20  // N (test case 2)
// Sample Output

// 2
// 4
// Explanation:

// For N = 4, initially the numbers are {1, 1, 1, 1}.
// In the 1st round, all the numbers are multiplied with -1, therefore they will become {-1, -1, -1, -1}.
// In the 2nd round, every 2nd number is multiplied with -2, therefore they will become {-1, 2, -1, 2}.
// In the 3rd round, every 3rd number is multiplied with -3, therefore they will become {-1, 2, 3, 2}.
// In the 4th round, the 4th number(i.e. the last number) is multiplied with -4, therefore they will become {-1, 2, 3, -8}.
// Hence, after four rounds, 2 numbers are less than zero.


// Similarly, for N = 20, 4 numbers will become less than zero, after 20 rounds.