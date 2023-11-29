// Callback Example using Pointer to Array of functions

#include<stdio.h>
#include <string.h>

void ButtonClick(void);
void SensorCatch(void);
void TimerExpire(void);
void Defaut(void);
    

// Array time of function pointer
//declaring an array of function pointers named EventHandler, 
//and each element of this array points to a function that takes no parameters (void parameters). 
//The functions are ButtonClick, TimerExpire, SensorCatch, and Default.
void (*EventHandler[])(void)={ButtonClick,TimerExpire,SensorCatch,Defaut};


void Events(int event){
    if(event>=0 && event<3){
        (*EventHandler[event])();
    }
}



void main(){
    int i;
    printf("\nEnter a Number for Event Handler : \n");
    printf("\n0 for ButtonClick\n1 for TimerExpire\n2 for SensorCatch\n");
    scanf("%d",&i);
    Events(i);
    

}

// ************************************************* function definition****************************

void ButtonClick(void){
    printf("Button Clicked!");
}

void SensorCatch(void){
    printf("Sensor Catched !");
}
void Defaut(void){
    printf("Invalid operation triggered !");
}
void TimerExpire(void){
    printf("Timer Expired !");
};
