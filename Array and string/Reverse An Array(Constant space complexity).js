
// Description

// Given an array of integers of length N, write a program to reverse the array with constant space complexity.

// Note: The approach should be a constant space complexity i.e, O(1)

// Input Description

// Input Format

// First line contains the length of the array N.

// Second line contains N number of integers separated by spaces.

// Constraints

// 1 <= N<= 100

// Output Description

// Print the reversed array

// Sample Input 1

// 6
// 1 5 4 3 2 6
// Sample Output 1
// 6 2 3 4 5 1

// AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

function runProgram(input) {
  // Write code here
  input=input.split("\n")
  let n=+input[0]
  let arr=input[1].trim().split(" ").map(Number)
  let res=""
  for(let i=n-1;i>=0;i--){
    if(i==0){
      res+=`${arr[i]}`
    }
    else{
      res+=`${arr[i]} `
    }
  }
  console.log(res)
}