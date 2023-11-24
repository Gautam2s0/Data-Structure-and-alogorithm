#include <stdio.h>
#include<string.h>
#define MAX 10


void main(){
    char s1[MAX],s2[MAX];
    printf("Enter the  first string : ");
    gets(s1);
    
    printf("Enter thr Seconmd String : ");
    gets(s2);

  printf("********************************* Before Swap ********************************\n");

    printf("First String = %s\n",s1);
    printf("Second String = %s\n",s2);
    
    printf("*********************************After Swap ********************************\n");
    swap(s1,s2,MAX);

    printf("First String = %s\n",s1);
    printf("Second String = %s\n",s2);
    
}

void swap(char *a,char* b,int len){
    int i=0;
    int j;
    while(i<len){
        j=a[i];
        a[i]=b[i];
        b[i]=j;
        i++;
    }
    

}

