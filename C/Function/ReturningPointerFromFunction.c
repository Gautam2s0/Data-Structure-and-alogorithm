#include <stdio.h>
int* returnPointer(int[]); // pointer type function

void main(){
    int arr[20]={1,2,3,4,5,7,9};
    int *p;
    // storing the pointer in p so p should be pointer variable
    p=returnPointer(arr);
    printf("p=%d",*p);
}

int* returnPointer(int a[]){
    // function will return pointer not a value 
    a=a+2;
    return a;
}