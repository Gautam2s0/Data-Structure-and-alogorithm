#include <stdio.h>
int main()
{
    int a = 10, b = 20;
    //****************************** Void Pointer  *****************************

    void *vp;
    // for a
    vp = &a;
    printf("%d\n", *(int *)vp);
    // for b
    vp = &b;
    printf("%d\n", *(int *)vp);

    // ***************************** Null Pointer ********************************************
    int *ptr1=NULL; // or 0
    int *ptr2=0;
    int *ptr3;
    int *ptr4;
    if(ptr1==ptr2){
        printf("Both are null Pointer\n");

    }
    else{
        printf("Not a null Pointer\n");

    }

    if(ptr3==ptr4){
        printf("Both wild pointer are same\n");

    }
    else{
        printf("Both wild pointer are  not same\n");

    }

    return 0;
}