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
    int g1,g2;
    int arr[]={1,2,3,4,5,6,7,8};
    // printf("Enter a number : ");
    // scanf("%d",&i);
    // j=fibonacci(i);
    // printf("\nsum = %d\n",j);

// ***********************************************
    // size=sizeof(arr)/sizeof(arr[0]);
    // ArrayElements(arr,size);

   // ********************************************************
   printf("Enter two number : ");
   scanf("%d %d",&g1,g2);
    printf("GCD = %d\n",GCD(g1,g2));
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

// Write a program in C to find the GCD of two numbers using recursion. >

int GCD(int n,int m){
    int rem=0,num;
    if(n>m){
        rem=n%m;
        num=m;
    }
    else{
        rem=m%n;
        num=n;
    }
    if(rem==0) return num;
    GCD(rem,num);
  
}
