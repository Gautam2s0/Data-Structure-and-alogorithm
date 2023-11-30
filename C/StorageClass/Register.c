// This storage class declares register variables that have the same functionality as that of the auto variables
//The only difference is that the compiler tries to store these variables in the register of the microprocessor if a free register is available.

//Use of register variables to be much faster than that of the variables stored in the memory during the runtime of the program.


// If a free registration is not available, these are then stored in the memory only.

// We are using register class where variable which are frequently use in progaram and improve the running time of program.

// We cannot obtain the address of a register variable using pointers. 

// Scope of register class variable is block/function

// we can't declare register class variable a global;

 #include <stdio.h>


 void main(){
    register int sum=0;
    int a=0,b=1;
    for(int i=0;i<10;i++){
       
        sum+=a++ + b++;
    }
    //here sum is frequently use so we can declare sum in register class also a,b can declare beacause they are also using frequently; 
    printf("sum = %d",sum);
 }