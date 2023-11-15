#include  <stdio.h>
#include <string.h>

int main(){
    int marks[5],i,j,sum=0,avg=0;
    printf("Enter the students marks: ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&marks[i]);
    }

    for ( i = 0; i <5; i++)
    {
        sum+=marks[i];
    }
    avg=sum/5;

    printf("Sum of All student marks = %d",sum);
    printf("Average of all student marks = %d",avg);

    return 0;

}