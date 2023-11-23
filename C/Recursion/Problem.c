// Write a program in C to calculate the power of any number using recursion.
#include <stdio.h>
int power(int pow, int n);
 
int main()
{
    int n,pow,res,hails;
	// printf("\n\n Recursion : power of any number :\n");
	// printf("-------------------------------------------------------------\n");	
     
    // printf(" Input the Number  and Power : ");
    // scanf("%d %d", &n,&pow);
     
    //  res=power(pow,n);
    
    // printf("result = %d\n",res);

    // ************************************************************
     
    printf("Enter a Hailstone Number : ");
    scanf("%d",hails);
    Hailstone(hails);
     
    return 0;
}
int power(int s, int n)
{
   if(s<=1) return n;
   n=n*power(s-1,n); 
}


// Write a C program to find the Hailstone Sequence of a given number up to 1.
// A hailstone strong follows these rules:
// If a number is even, divide it by 2
// If a number is odd, multiply it by 3 and add 1.

void Hailstone(int n){
    printf("%d \t",n);
    if(n==1){
        return 0;
    }
    if(n%2==0){
        n=n/2;
    }
    else{
        n=n*3+1;
    }
    
    Hailstone(n);

}
