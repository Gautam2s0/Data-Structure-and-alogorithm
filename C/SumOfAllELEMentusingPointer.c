// Write a program in C to calculate the length of a string using a pointer.

#include <stdio.h>
#define MAX 10
void main(){
    int arr[MAX];
    int *el,i,l;
    int sum=0;
    printf("Enter the array element ");
    for(i=0;i<MAX;i++){
        scanf("%d",&arr[i]);
    }
    el=arr;

    l=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<l;i++){
      sum+=*el;
      printf("sum of array at index %d is %d\n",i,sum);
      el++;
    }
    printf("Sum Of array is %d ",sum);

}