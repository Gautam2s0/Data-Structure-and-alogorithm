// Write a program in C to print the elements of an array in reverse order.
#include <stdio.h>
#define MAX 5 
void reverse(int[],int);

void main(){
    int arr[MAX];
    // ******************************Without Function********************************************8
    int *rev, i;
    rev=&arr[MAX-1];
    printf("Enter element of Array : ");
    for(i=0;i<MAX;i++){
        scanf("%d",&arr[i]);
    }
   
    // for(i=*rev;i>0;i--){
    //     printf("%d\t",*rev);
    //     rev--;
    // }

    //******************************* Using Function *********************************************************

     reverse(arr,MAX);
    for(i=0;i<MAX;i++){
        printf("%d\t",arr[i]);
    }

}

void reverse(int a[],int len){
    int *l,*r;
    l=a;
    r=a+len-1;
    while (l<=r)
    {
        *l^=*r;
        *r^=*l;
        *l^=*r;
        l++;
        r--;
    }
    

}