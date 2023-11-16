#include <stdio.h>
#include <string.h>

void main () {
    char arr1[4]={'D','B','C','A'};
    int arr2[4]={50,20,30,5};
    int i ,j,p,temp;
    p=sizeof(arr1)/sizeof(arr1[0]);
    for(i=0;i<p-1;i++){
        for(j=i+1;j<p;j++){
            if(arr1[i]>arr1[j]){
                temp=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp;
            }
        }
    }
    for ( i = 0; i <p; i++)
    
    {
        printf("%c\t",arr1[i]);
    }
    
}

