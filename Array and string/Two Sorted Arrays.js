// Description

// You are given two arraysAandB, each of size N.
// The first array A, is sorted in ascending order, while the second array is sorted in descending order.
// You have to find the number of elements common in both the arrays.
// Try to solve this without using any extra space.



// Input
// The first line of the input containsT, the number of test cases.

// The first line of each test case, contains N, the number of elements in the arrayAandB

// The next line of the test case, containsNspace separated integers, denoting the number of elements of the arrayA

// The next line containsNspace separated integers, denoting elements of the arrayB.

// Constraints

// 1 <=T<= 10

// 1 <=N<= 1000000

// 1 <=A[i]<= 1000


// Output
// For each test case, print the number of elements common in both the arrays, on a new line.


// Sample Input 1 

// 1
// 6
// 1 2 2 3 4 5
// 4 4 3 2 1 1
// Sample Output 1

// 4
// Hint

// In the sample test case, the number of elements common in both the arrays are {1,2,3,4}. Therefore, the required output is 4.Screenshot 2022-06-03 at 2.42.47 AM.png

***********************************************************************************************************************************************************************
  
  const array=(n,arr1,arr2)=>{
    let count=0
    let l=0,r=n-1
    while(l<n && r>=0){
        if(arr1[l]===arr2[r]){
            count++;
            l++
            r--
        }
        else if(arr1[l]<arr2[r]){
            l++
        }
        else if(arr1[l]>arr2[r]){
            r--
        }
    }
    
    
    console.log(count)
}
