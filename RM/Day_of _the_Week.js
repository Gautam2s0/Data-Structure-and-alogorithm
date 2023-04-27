// Description

// Given an integer N, output the name of the Day based upon the integer day number.

// e.g.: 0 - Sunday, 1- Monday, 6 - Saturday etc.

// Note: Use switch case to complete this problem


// Input
// The first line of input contain an integer N

// Output
// Output the name of the day based upon the day number, print the name of the day starting with first letter as a capital letter, e.g. Monday

// Sample Input 1 

// 3
// Sample Output 1

// Wednesday
// Sample Input 2 

// 5
// Sample Output 2

// Friday

// *****************************************************************************************************

const DayOfWeek=(n)=>{
    switch(n){
        case 0:{console.log("Sunday"); break }
        case 1:{console.log("Monnday"); break}
        case 2:{console.log("Tuesday"); break}
        case 3:{console.log("Wednesday"); break}
        case 4:{console.log("Thursday"); break}
        case 5:{console.log("Friday") ;break}
        case 6:{console.log("Saturday"); break}
    }
}
 
