#include <stdio.h>

void main(){
    FILE *fp;
    char str[10];
    int i=0;
    fp=fopen("f1.txt","r");
    if(fp==NULL){
        printf("File is not FOUND ");
        exit(1);
    }
    while (fgets(str,9,fp)!=NULL)
    {
        printf("str at i =%d  is :  %s  \n",i++,str);
    }
    fclose(fp);
    

}