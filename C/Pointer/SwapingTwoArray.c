#include <stdio.h>
#define MAX 5

void swapArray(int[],int[],int);

void main(){
    int a1[MAX],a2[MAX];
    int i,j;
    printf("Enter the element of first Array : ");
    for(i=0;i<MAX;i++){
        
        scanf("%d",&a1[i]);
    }

    printf("Enter the element of Seconmd Array : ");
    for(i=0;i<MAX;i++){
        scanf("%d",&a2[i]);
    }

  printf("********************************* Before Swap ********************************\n");

    printf("First Array\n");
    for(i=0;i<MAX;i++){
       
        printf("%d\t",a1[i]);
    }
    printf("\n");
    printf("Second Array\n");
    for(i=0;i<MAX;i++){
       
        printf("%d\t",a2[i]);
    }
 
 
    // swap(&a1,&a2,MAX);
    swapArray(a1,a2,MAX);
    

    printf("\n*********************************After Swap ********************************\n");

    printf("First Array\n");
    for(i=0;i<MAX;i++){
       
        printf("%d\t",a1[i]);
    }
    printf("\n");
    printf("Second Array\n");
    for(i=0;i<MAX;i++){
       
        printf("%d\t",a2[i]);
    }
}

void swap(int *a[],int* b[],int len){
    int i,j;
    for(i=0;i<len;i++){
        j=a[i];
        a[i]=b[i];
        b[i]=j;
        // *b[i]=*a[i];
        // printf("a at %d is %d\n",i,a[i]);
        // printf("b at %d is %d\n",i,b[i]);
    }
    

}

void swapArray(int * sourceArr, int * destArr, int size)
{
    // Pointer to last element of source array
    int * sourceArrEnd = (sourceArr + (size - 1));

    // Pointer to last element of destination array
    int * destArrEnd   = (destArr + (size - 1));


    /*
     * Swap individual element of both arrays
     */
    while(sourceArr <= sourceArrEnd && destArr <= destArrEnd)
    {
        *sourceArr ^= *destArr;
        *destArr   ^= *sourceArr;
        *sourceArr ^= *destArr;

        // Increment source array to point to next element
        sourceArr++;

        // Increment destination array to point to next element
        destArr++;
    }
}