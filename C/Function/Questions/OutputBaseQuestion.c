// #include <stdio.h>
//     void first()
//     {
//         printf("Hello World");
//     }
//     void main()
//     {
//         void *ptr() = first;
//         ptr++
//         ptr();
//     }

// **************************************************************************************************
//  #include <stdio.h>
//     int mul(int a, int b, int c)
//     {
//         return a * b * c;
//     }
//     void main()
//     {
//         int (*function_pointer)(int, int, int);
//         function_pointer  =  mul;
//         printf("The product of three numbers is:%d",
//         function_pointer(2, 3, 4));
//     }
//  o/p = 24
// **************************************************************************************************

// #include <stdio.h>
//     void f(int (*x)(int));
//     int myfoo(int);
//     int (*fooptr)(int);
//     int ((*foo(int)))(int);
//     int main()
//     {
//         fooptr = foo(0);
//         fooptr(10);
//     }
//     int ((*foo(int i)))(int)
//     {
//         return myfoo;
//     }
//     int myfoo(int i)
//     {
//         printf("%d\n", i + 1);
//     }

// o/p = 11

// Function Declarations:

// f is a function that takes a function pointer x as an argument. The function pointer x is expected to point to a function that takes an int as an argument and returns an int.
// myfoo is a function that takes an int as an argument and returns an int.
// fooptr is a function pointer that takes an int as an argument and returns an int.
// foo is a function that takes an int as an argument and returns a function pointer. The returned function pointer is expected to point to a function that takes an int as an argument and returns an int.
// main Function:

// fooptr is assigned the result of calling the foo function with argument 0. The foo function returns a function pointer to myfoo.
// fooptr(10) calls the function pointed to by fooptr (which is myfoo) with the argument 10.
// foo Function:

// foo is a function that takes an int i as an argument and returns a function pointer. In this case, it returns a pointer to the myfoo function.
// myfoo Function:

// myfoo is a simple function that takes an int i as an argument and prints i + 1 to the console.
// In summary, the code demonstrates the use of function pointers in C. The foo function returns a function pointer to myfoo, and this function pointer is stored in fooptr. Later, fooptr is used to call the myfoo function with the argument 10. As a result, "11" is printed to the console.

// *************************************************************************************************************
#include <stdio.h>
    void f(int (*x)(int));
    int myfoo(int i);
    int (*foo)(int) = myfoo;
    int main()
    {
        f(foo(10));
    }
    void f(int (*i)(int))
    {
        i(11);
    }
    int myfoo(int i)
    {
        printf("%d\n", i);
        return i;
    }

// ************************************************************************************

// #include <stdio.h>
// int main()
// {
//     int i = 18;
//     void *p = &i;
//     printf("%d\n", (int *)p);           // 6422296 address of i
//     printf("%d\n", *(int *)p);          // 18 value of i
//     printf("%f\n", *(float *)p);        // 0.000000 float value which is present on location 6422296 || picking float value
//     printf("%f\n", (float)*(float *)p); // 0.000000 float value which is present on location 6422296 || picking float value
//     printf("%f\n", (float)*(int *)p);   // 18.000000 float value which is present on integer location  6422296
//     return 0;
// }


//  #include <stdio.h>
//     int main()
//     {
//         int i = 97, *p = &i;
//         foo(&p);
//         printf("%d ", *p);
//         return 0;
//     }
//     void foo(int **p)
//     {
//         int j = 2;
//         *p = &j;
//         printf("%d ", **p);
//     }