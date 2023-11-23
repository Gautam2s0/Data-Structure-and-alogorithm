#include <stdio.h>
void ArrayElements(int[],int);
int  fibonacci(int n){
    static int prev=0,next=1, sum=1;
    if(n<1) return 0;
    printf("%d\t",sum);
    sum=prev+next;
    prev=next;
    next=sum;
    fibonacci(n-1);
    return sum;
}


int main(){
    int i,j,size;
    int arr[]={1,2,3,4,5,6,7,8};
    // printf("Enter a number : ");
    // scanf("%d",&i);
    // j=fibonacci(i);
    // printf("\nsum = %d\n",j);.
    size=sizeof(arr)/sizeof(arr[0]);
    ArrayElements(arr,size);
    return 0;
}

// Write a program in C to print the array elements using recursion. 


void ArrayElements(int arr[],int size){
   static int i=0;
    if(i==size) return 0;
   else{
     printf("Element at index %d is %d\n",i,arr[i]);
     i++;
    ArrayElements(arr,size);
   }
}