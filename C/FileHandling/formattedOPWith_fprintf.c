#include <stdio.h>


// fprint is used to store formatted output in file.
void main(){
    int a,b;
    FILE *fp;
    fp=fopen("f1.txt","w");
    printf("Enter Two Number : ");
    scanf("%d%d",&a,&b);
    fprintf(fp,"Sum of %d and %d is %d ",a,b,a+b);
    fclose(fp);
}