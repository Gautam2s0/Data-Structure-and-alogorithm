#include <stdio.h>
int main(){
  int i,sum=0;
  for(i=1;i<=5;i++){
    if(i==2){
      continue;
    }
    else{
      sum+=i;
    }
  }
  printf("sum = %d",sum);
  return 0;
}