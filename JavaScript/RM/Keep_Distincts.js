
// Description

// Given a string S. Your task is to remove all duplicates characters from the string S

// NOTE:

// 1.) Order of characters in output string should be same as given in input string.

// 2.) String S contains only lowercase characters ['a'-'z'].

// Input
// Input Format:

// Input contain a single string S.

// Constraints:

// 1<=|Length of String|<=100000


// Output
// Print the string S with no any duplicate characters.


// Sample Input 1 

// iloveprogramming
// Sample Output 1

// iloveprgamn
// ***************************************************************************************************
const Distincts=(str)=>{
    let ans=[]
    for(let i=0;i<str.length;i++){
        if(!ans.includes(str[i])){
            ans.push(str[i])
        }
    }
    console.log(ans.join(""))
}
