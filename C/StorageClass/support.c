#include <stdio.h>

void run(){
    extern int x;
    printf("x = %d",x++);
    printf("\nRun\n");
}
