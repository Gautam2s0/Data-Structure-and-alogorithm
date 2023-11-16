#include <stdio.h>
#include<string.h>
// using swaping
void main(){
    char string [30]="Gautam";
    int i=0,l;
    char c;
    l=strlen(string);
    for(i;i<l/2;i++){
        c=string[i];
        string[i]=string[l-1-i];
        string[l-i-1]=c;
    }
    printf("%s",string);

}