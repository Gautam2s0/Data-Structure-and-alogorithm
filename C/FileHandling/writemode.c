#include <stdio.h>
#include <string.h>
#define LENGTH 200

void main(){
    char str[LENGTH];
    int i;
    FILE *fp;
    fp=fopen("f1.txt","w");
    if(fp==NULL){
        printf("File is not open");
        exit(1);
    }

    printf("Enter a string : ");
    gets(str);
    for(i=0;i<strlen(str);i++){
        fputc(str[i],fp);

    }
    // getch()
    fclose(fp);
    // getch();
}