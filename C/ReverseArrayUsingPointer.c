// Write a program in C to print the elements of an array in reverse order.
#include <stdio.h>
#define MAX 5 
void main(){
    int arr[MAX];
    int *rev, i;
    rev=&arr[MAX-1];
    printf("Enter element of Array : ");
    for(i=0;i<MAX;i++){
        scanf("%d",&arr[i]);
    }
    for(i=*rev;i>0;i--){
        printf("%d\t",*rev);
        rev--;
    }

}