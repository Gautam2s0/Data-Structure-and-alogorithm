#include <stdio.h>

void main(){
    int arr[30]={1,2,5,7,8,4,0,3};
    int *a=&arr[0],max=0,size=0,i=0,j=0;
    size=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if(a[i]>a[j]){
                max=a[i];
                a[i]=a[j];
                a[j]=max;
            }
    }
    }
    // a[3]=22;
    // max=a[0];
    for(i=0;i<size;i++){
       if(arr[i]!='\0'){
         printf("%d\t",arr[i]);
       }
    }
}