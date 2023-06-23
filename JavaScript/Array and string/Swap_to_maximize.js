// Description

// Nick has a habit of collecting stamps. He has n number of stamps with him and each stamp has a certain value (x0,x1,x2,....).Nick's friend gave him an offer that since he also has stamps of values (y0,y1,y2...) Nick can exchange or swap any of his stamps with Neel's stamps but the exchange/swaps are at most k times.

// Your task is to find the maximum possible sum of stamp values Nick can obtain in the array X (Nick's array of stamps) if he can do no more than (i.e. at most) K such exchanges or swaps.

// Input Description

// Input Format

// The first line of the input contains one integer t — the number of test cases. Then test cases follow.

// The first line of the test case contains two integers n and k — the number of elements in X and Y and the maximum number of moves he can do.

// The second line of the test case contains n integers x0,x1,x2,…,x(n-1)

// The third line of the test case contains n integers y0,y1,y2,…,y(n-1)

// Constraints

// 1 ≤t≤200

// 1 ≤ n ≤ 30

// 0 ≤ k ≤ n

// 1 ≤ xi ≤ 30

// 1 ≤ yi ≤ 30

// Sample Input 1

// Copy

// 5
// 2 1
// 1 2
// 3 4
// 5 5
// 5 5 6 6 5
// 1 2 5 4 3
// 5 3
// 1 2 3 4 5
// 10 9 10 10 9
// 4 0
// 2 2 4 3
// 2 4 2 3
// 4 4
// 1 2 2 1
// 4 4 5 4
// Sample Output 1

// Copy

// 6
// 27
// 39
// 11
// 17



// Output Description

// For each test case, print the answer — the maximum possiblesum he can obtain in the array Xhe can do no more than kswaps.

// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const max=(n,k,nick,neel)=>{
  let sum=0;
  nick.sort((a,b)=>a-b)
  neel.sort((a,b)=>b-a)
  for(let i=0;i<n;i++){
    if(k>0 && nick[i]<neel[i]){
      sum+=neel[i]
      k--
    }
    else{
       sum+=nick[i]
    }
  }
  console.log(sum)
}
