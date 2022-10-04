/*
 *	@params:
 *		marks1 = A vector denoting the marks of first row students
 *		marks2 = A vector denoting the marks of second row students
 *
 *	@return:
 *		A vector of size (n + m), after merging the students in two rows
 */
vector<int> mergeStudents(vector<int> a, vector<int> b) {
  // Write your code here
  vector<int>c(a.size()+b.size());
 // int k =0,i =0 , j=0;
   int i =0 , j =0 , k =0;
	while(i<a.size() and j<b.size())
    {
      if(a[i]<=b[j])
        c[k++] = a[i++];
      else
        c[k++] = b[j++];
    }
  while(i<a.size())
    c[k++] = a[i++];
  while(j<b.size())
    c[k++] = b[j++];
  sort(c.begin(),c.end(), greater<int>());
  return c;
}


// Merge Student Rows
// A school has organized an award ceremony for the students who performed exceptionally well in their board examinations. Those students are lined up in two separate rows, and in each row they are standing in the descending order based on their marks. As the ceremony hall was a bit crowded, so teachers decided to merge the students into a single row. But after merging, they should be lined up in a sorted manner only (i.e. in the descending order based on their marks).

// Given two arrays, denoting the marks of the respective students in the two rows. Your task is to help teachers, and merge the two arrays to create one single sorted array.

// Complete the function mergeStudents() which takes two arrays, marks1 and marks2 as input and returns a new sorted array after merging them.

// Example :

// marks1 : {8, 6, 4}

// marks2 : {5, 2}

// Merged Array : {8, 6, 5, 4, 2}

// Input Format

// First line contains an integer n, denoting the number of students in the first row.
// Second line contains n space separated integers, denoting the marks of first row students.
// Third line contains an integer m, denoting the number of students in the second row.
// Fourth line contains m space separated integers, denoting the marks of second row students.
// Output Format

// Print the elements of the merged array, separated by space.
// Constraints

// 1 <= n, m <= 10^9
// 1 <= marks1[i], marks2[i] <= 1000
// Sample Input

// 4            // Size of 1st array
// 6 3 2 1      // Elements of 1st array
// 3	     // Size of 2nd array
// 7 5 4	     // Elements of 2nd array
// Sample Output

// 7 6 5 4 3 2 1
