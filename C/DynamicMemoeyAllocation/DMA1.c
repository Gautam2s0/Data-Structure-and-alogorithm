#include <stdio.h>
#include <stdlib.h>

void fun(int *a)
{
    a = (int *)malloc(sizeof(int));
    
}

int main()
{
    int *p;
    fun(p);
    *p = 6;
    printf("%d", *p);
    return (0);
}

// In the fun function, you are passing a pointer a by value. 
//This means that changes made to a within the function will not affect the pointer in the main function.

// Inside the fun function, you allocate memory for an integer using malloc, 
//but the allocated memory is not being used or returned.

// In the main function, you are dereferencing the uninitialized pointer p after calling fun. 
//This will lead to undefined behavior.

// Here is a corrected version of your code:


// # include<stdio.h>
// # include<stdlib.h>
  
// void fun(int **a)
// {
//     *a = (int*)malloc(sizeof(int));
// }
  
// int main()
// {
//     int *p;
//     fun(&p);  // Pass the address of the pointer
//     *p = 6;
//     printf("%d", *p);
//     free(p);  // Free the allocated memory
//     return(0);
// }
