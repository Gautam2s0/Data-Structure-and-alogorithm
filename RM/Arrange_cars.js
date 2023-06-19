// Description
 
// For sure, the love mobiles will roll again on this summer's street parade. Each year, the organisers decide on a fixed order for the decorated trucks. Experience taught them to keep free a side street to be able to bring the trucks into order.

// The side street is so narrow that no two cars can pass each other. Thus, the love mobile that enters the side street last must necessarily leave the side street first. Because the trucks and the ravers move up closely, a truck cannot drive back and re-enter the side street or the approach street.

// You are given the order in which the love mobiles arrive. Write a program that decides if the love mobiles can be brought into the order that the organisers want them to be

// Input  
// Input Format  
// The first line of the input contains an integer t — the number of test cases. 
 
// The next 2*t lines contain the description of the t testcases. 
  
// The first line of each testcase contains the number of cars n.

// The second line of each testcase contains the n integers from 1 to n in some order. 

// Constraints
// 1 ≤ t ≤ 10^4

// 1 ≤ n ≤ 10^3
 

// Output
// Output Format
// For each testcase output YES if you can arrange the cars in the required order or NO otherwise.


// Sample Input 1 

// 1
// 5
// 5 1 2 4 3
// Sample Output 1

// YES

// **************************************************************************************************************

const Arrange_cars=(n,arr)=>{
    let lane=[],j=1
    for(let i=0;i<n;i++){
        if(arr[i]===j){
            j++
        }
        else{
            while(j===lane[lane.length-1]){
                lane.pop()
                j++
            }
            lane.push(arr[i])
        }
        
    }
    for(let i=lane.length-1;i>=0;i--){
        if(lane[i]===j){
            lane.pop()
            j++
        }
        else{
            break
        }
    }
    lane.length>0?console.log("NO"):
    console.log("YES")
     
} 
