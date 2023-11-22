#include <stdio.h>
    int main()
    {
        int i = 18;
        void *p = &i;
        printf("%d\n", (int*)p);  //6422296 address of i
         printf("%d\n", *(int*)p);  //18 value of i
        printf("%f\n", *(float*)p); // 0.000000 float value which is present on location 6422296 || picking float value  
        printf("%f\n", (float)*(float*)p); // 0.000000 float value which is present on location 6422296 || picking float value
        printf("%f\n", (float)*(int*)p); // 18.000000 float value which is present on integer location  6422296
        return 0;
    }