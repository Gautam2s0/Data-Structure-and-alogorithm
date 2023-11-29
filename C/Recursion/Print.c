#include <stdio.h>
#include <stdlib.h>
#define LEN 5

int* Array(){
    int *ptr = (int*) malloc(LEN*sizeof(int));
    
    int i;
    printf("Enter the element of the array : ");
    for(i=0;i<LEN;i++){
        scanf("%d",&ptr[i]);
       
    }
    
    
    free(ptr);
    // for(i=0;i<LEN;i++){
    //     printf("%d\t",ptr[i]);
       
    // }
    
    return ptr;
}

void main(){
    int i,*p;
    p=Array();
    for(i=0;i<LEN;i++){
        printf("%d\t",*p++);
    }
    // free(p);
    // if(p==NULL) printf("NULL");
    // else printf("NOT NULL");
    
}