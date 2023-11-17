// Given an array of n elements that contains elements from 0 to n-1, 
// with any of these numbers appearing any number of times. Find these repeating numbers 

// Note: The repeating element should be printed only once.

// Example: 

// Input: n=7 , array[]={1, 2, 3, 6, 3, 6, 1}
// Output: 1, 3, 6
// Explanation: The numbers 1 , 3 and 6 appears more than once in the array.

#include <stdio.h>
int main(){
    int n=7,i,j , array[]={1, 2, 3, 6, 3, 6, 1};
   for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(array[i]==array[j]){
            printf(" %d ",array[i]);
        } 
    }
   }

    return 0;
}