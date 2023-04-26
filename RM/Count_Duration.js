// Description

// Given 4 variables SH,SM,EH and EM  each separated by space(SH=starting hr, SM=starting min, EH=ending hr, EM=ending min), calculate and print the difference between the two times

// Input
// Input Format

// First line will be given by N test cases

// Next N line will be given SH,SM,EH and EM  each separated by space(SH=starting hr,SM=starting min, EH=ending hr, EM=ending min)

// Constraints

// N < 100


// Output
// Output Format

// N lines with duration HH MM(hours and minutes separated by space)


// Sample Input 1 

// 2
// 1 44 2 14
// 2 42 8 23
// Sample Output 1

// 0 30
// 5 41

// *************************************************************

const CountDuration=(arr)=>{
    let h1=arr[0],min1=arr[1]
    let h2=arr[2],min2=arr[3]
    let h=0,min=0
    if(min2>=min1){
        min=min2-min1;
    }
    else{
        min=(60+min2)-min1
        h2--
    }
    h=h2-h1
    console.log(h,min)
}
