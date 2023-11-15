// WAP to read two array and store the sum of these array into third array

#include<stdio.h>
void main(){
    int arr1[5],arr2[5],sum[5],i;
    printf("Enter the first array element :  ");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the Second array element :  ");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&arr2[i]);
    }
    for ( i = 0; i <5; i++)
    {
        sum[i]=arr1[i]+arr2[i];
        printf(" Element of third Array at index %d is %d\n",i,sum[i]);
    }

    
    
    
}