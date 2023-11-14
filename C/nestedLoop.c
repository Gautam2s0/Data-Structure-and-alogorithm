//  odd Even Sum using simple loop
//***************************************************************88
#include <stdio.h>
int main(){
  int i,j,sumOdd=0,SumEv=0;
  printf("Enter a number");
  scanf("%d",&j);
  for(i=1;i<=j;i++){
    if(i%2==0){
        SumEv+=i;
    //   continue;
    }
    else{
      sumOdd+=i;
    }
  }
  printf("Sum Of Even Number = %d\n",SumEv);
  printf("Sum Of Odd Number = %d\n",sumOdd);
  return 0;
}

//***********************************************************************************8