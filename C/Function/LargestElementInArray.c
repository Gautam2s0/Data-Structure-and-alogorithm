// Write a program in C to get the largest element of an array using the function.

// Test Data :
// Input the number of elements to be stored in the array :5
// Input 5 elements in the array :
// element - 0 : 1
// element - 1 : 2
// element - 2 : 3
// element - 3 : 4
// element - 4 : 5
// Expected Output :

// The largest element in the array is : 5 

#include <stdio.h>
int largestNum(int[],int);

void main(){
    int arr[56]={1,2,3,4,5};
    int max;
    max=largestNum(arr,5);
    printf("Largest number is : %d",max);
}
int largestNum(int arr[],int size){
    int max=0,i;
    for(i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }

    }
    return max;

}