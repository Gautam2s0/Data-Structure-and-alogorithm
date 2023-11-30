//Extern storage class simply tells us that the variable is defined elsewhere and not within the same block where it is used.
//Basically, the value is assigned to it in a different block and this can be overwritten/changed in a different block as well. 
//So an extern variable is nothing but a global variable initialized with a legal value where it is declared in order to be used elsewhere. 
//It can be accessed within any function/block.

//The main purpose of using extern variables is that they can be accessed between two different files which are part of a large program.


#include <stdio.h>
// #include "Static.c"
int x;
// Or
int main(){
    
   externStorageClass() ;
   return 0;

}



void externStorageClass() 
{ 
  
    printf("\nDemonstrating extern class\n\n"); 
  
    // telling the compiler that the variable 
    // x is an extern variable and has been 
    // defined elsewhere (above the main 
    // function) 
    extern int x; 
  
    // printing the extern variables 'x' 
    printf("Value of the variable 'x'"
           " declared as extern: %d\n", 
           x); 
  
    // value of extern variable x modified 
    x = 2; 
  
    // printing the modified values of 
    // extern variables 'x' 
    printf("Modified value of the variable 'x'"
           " declared as extern: %d\n", 
           x); 
  
    printf("--------------------------------"); 
} 