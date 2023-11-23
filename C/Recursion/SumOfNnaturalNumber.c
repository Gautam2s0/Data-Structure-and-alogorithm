#include <stdalign.h>
int fact(int);
void main(){
    int res,num;
    printf("Enter a number : ");
    scanf("%d",&num);
    res=Nsum(num);
   if(res==0){
    printf("Entered number is not a Natural number");
   }
   else{
     printf("Nsum = %d",res);
   }
}

int Nsum(int num){
    // static int a=1;
    // if(num==1) return a;
    // else if(num<1) return 0;
    // a+=num;
    // Nsum(num-1);

    // ************************* method 2****************

    int a=0;
    if(num==1) return 1;
    a=num+Nsum(num-1);
    return a;
}