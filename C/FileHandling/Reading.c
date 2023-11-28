#include <stdio.h>

void main(){
    FILE *fp;
    char ch;
    fp=fopen("f1.txt","r");
    if(fp==NULL){
        printf("File is not Exist");
    }
    ch=fgetc(fp);
    while(!feof(fp)){
        printf("%c",ch);
       ch=fgetc(fp);
    }
    fclose(fp);
    
}