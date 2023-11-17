#include <stdalign.h>
#include <stdlib.h>

int * f(){
        int a=10;
        return &a;
    }
int main(){
    // ****************** case 1 ************************
    // int *ptr=(int*)malloc(sizeof(int)); //dynamic integer pointer
    // *ptr=10;
    // printf("%d\n",*ptr);
    // free(ptr);
    // printf("%d\n",*ptr); //dangling pointer --> may be error or garbage value;
     
    //  ********************** case 2 *******************************************
    
    int *ptr=f();
    printf("%d\n",*ptr); //dangling pointer --> may be error or garbage value; solution: make a as static

    return 0;

}