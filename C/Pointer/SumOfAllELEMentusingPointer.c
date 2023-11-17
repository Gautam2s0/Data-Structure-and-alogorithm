// Write a program in C to calculate the length of a string using a pointer.

#include <stdio.h>
#define MAX 10
void main(){
    int arr[MAX];
    int *el,i,l;
    int sum=0;
    el=&arr[0];
    printf("Enter the array element ");
    for(i=0;i<MAX;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<MAX;i++){
      sum+=*el;
      el++;
    }
    printf("Sum Of array is %d ",sum);

}