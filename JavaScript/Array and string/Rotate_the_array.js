Description

You are given an unsorted array of n elements and an integer k, you need to rotate the array by k units towards right direction ( => ).


Input Description

In the first line, we have $T$, the number of testcases.
For Every testcase, We have Two Lines of Input.
1. We have $N$ and $K$.
2. $N$ Integers of array separated by space.

Constraints

1<=T<=10
1<=N<=1000
0<=K<=1000
1 <= A[i] <= 1000000

Output Description

output N elements, elements of the array , rotated by K units

Sample Input 1

Copy

3
3 1
1 2 3
2 2
1 2
2 3
1 2
Sample Output 1

Copy

3 1 2
1 2
2 1


const rotate=(n,k,arr)=>{
  let unit=k%n
  let r=arr.splice(n-unit,n)
  console.log([...r,...arr].join(" "))
}
