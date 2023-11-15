// taking input from user and sum of the array 

#include <stdio.h>
void main(){
    int a[2][3],i,j,sum=0;
    printf("Enter the element of Matrix");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            sum+=a[i][j];
        }
    }
    printf("sum = %d",sum);

}