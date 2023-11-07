#include <stdio.h>

int main()
{
   int a=18,b=9,c=9,d=10,e=11;
   int n;
//   n=a+c==b>=e<c+d!=1;
   printf("%d",a+c==b>=e<c+d!=1);
    return 0;
}

// o/p : 1

//a+c==b>=e<c+d!=1
// 18+9==9>=11<9+10!=1
// 27==9>=11<19!=1
// 27==9>=1!=1
// 27==1!=1
// 0!=1
// 1