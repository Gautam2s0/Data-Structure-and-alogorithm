// Write a program in C to check Armstrong and Perfect numbers using the function.
// Test Data :
// Input any number: 371
// Expected Output :

//  The 371 is an Armstrong number.                                                 
//  The 371 is not a Perfect number.

#include <stdio.h>
#include <stdbool.h>
bool IsArmstrong(int);

void main(){
    int num=371;
    bool flag;
    flag=IsArmstrong(num);
    printf("Largest number is : %d",flag);
}
bool IsArmstrong(int num){
    

}