// Syntax of Functions in C
// The syntax of function can be divided into 3 aspects:

// 1. Function Declaration--->  returnType nameOfFunction(parameter with datatypes ) eg. int SUM(int a,int b)
// 2. Function Definition
// 3. Function Calls

#include <stdio.h> 

// int Sum(int p,int p2) // function Declarations

// ****************************************** Function Declarations******************************************

// In a function declaration, we must provide the function name, 
// its return type, and the number and type of its parameters. 
// A function declaration tells the compiler that there is a 
// function with the given name defined somewhere else in the program.


// ************************************* Function Definition *********************************************************

// The function definition consists of actual statements which are executed 
// when the function is called (i.e. when the program control comes to the function)
int Sum (int a, int b) 
{ 
  return a + b; 
}

int main(){
    int s=Sum(7,8); //function call
    printf("%d",s);
    return 0;
}

// if you want restrict  the parameter means no argument use void like int sum(void) sum function will not take any aragument if you pass it will through error