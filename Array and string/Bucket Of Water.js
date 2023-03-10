// Description

// Alice hasNbuckets of water. Each bucket is characterized by two integers: the remaining water volumea[i]and the capacity of the bucketb[i](ai <= bi).Alice has chosen to pour all of the leftover water into only two buckets. PrintYESIf he can successfully do it, otherwise printNO.


// Input
// Input Format:-

// The input contains the number of testcases T, then T testcases follows

// The first line of the input contains single integerN, the number of buckets.

// The second line of the input contains N space-separated integers, a[0], a[1], ..., a[N-1].

// The third line of the input contains N space-separated integers, b[0], b[1], ..., b[N-1].

// Constraints:-

// 1 <= T <= 10

// 2 <= N <= 10^5

// 0 <= a[i] <= b[i] <= 10^6


// Output
// Output Format:-

// For T testcases, each line contains eitherYESorNO.


// Sample Input 1 

// 2
// 2
// 3 5
// 3 6
// 3
// 6 8 9
// 6 10 12
// Sample Output 1

// YES
// NO
// Hint

// TestCase 1:There are already 2 buckets, so the answer is "YES".

// TestCase 2:We cannot pour all the water into two buckets. answer is "NO".

*************************************************************************************************************************************************************
  
  const BucketOfWater=(n,water,bucket)=>{
   let amount_of_water=0
   for(let el of water){
       amount_of_water+=el
   }
   bucket.sort((a,b)=>a-b)
   let capacity_of_two_bucket=bucket[n-1]+bucket[n-2]
   amount_of_water<=capacity_of_two_bucket?console.log("YES"):console.log("NO")
}
