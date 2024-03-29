// typecasting ==> changing data type one to another 
// syntax ==>: 
            //  new_datatype *new_pointerName=(new_dataype *)original_pointer


// #include <stdio.h>
//     int main()
//     {
//         int i = 18;
//         void *p = &i;
//         printf("%d\n", (int*)p);  //6422296 address of i
//          printf("%d\n", *(int*)p);  //18 value of i
//         printf("%f\n", *(float*)p); // 0.000000 float value which is present on location 6422296 || picking float value  
//         printf("%f\n", (float)*(float*)p); // 0.000000 float value which is present on location 6422296 || picking float value
//         printf("%f\n", (float)*(int*)p); // 18.000000 float value which is present on integer location  6422296
//         return 0;
//     }

#include <stdio.h>
    void main()
    {
        int x = 0;
        int *ptr = &x;
        printf("%p\n", ptr);
        ptr++;
        printf("%p\n ", ptr);
    }

    #include <stdio.h>
    void foo(int*);
    int main()
    {
        int i = 10;
        foo((&i)++);
    }
    void foo(int *p)
    {
        printf("%d\n", *p);
    }