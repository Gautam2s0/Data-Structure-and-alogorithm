#include <stdio.h>

void main(){
    FILE *fp;
    int a,b,c;
    fp=fopen("f1.txt","r");
    //reading variable from file and storing them in above variable
    // here , is data seperator delimeter
    fscanf(fp,"%d,%d,%d",&a,&b,&c);
    printf("a = %d b = %d c = %d",a,b,c);
    fclose(fp);
}