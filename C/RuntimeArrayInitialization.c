#include <stdio.h>

void main (){
    int a[5],i;
    printf("Enter the element of Array : ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        printf("\n Element of array is %d",a[i]);
    }

    

}