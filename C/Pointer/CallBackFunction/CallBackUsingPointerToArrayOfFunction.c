// Callback Example using Pointer to Array of functions

#include<stdio.h>
#include <string.h>

void ButtonClick(void);
void SensorCatch(void);
void TimerExpire(void);
void Defaut(void);
    

// Array of pointers to callback functions
//declaring an array of function pointers named EventHandler, 
//and each element of this array points to a function that takes no parameters (void parameters). 
//The functions are ButtonClick, TimerExpire, SensorCatch, and Default.
void (*EventHandler[])(void)={ButtonClick,TimerExpire,SensorCatch,Defaut};


//Function that triggers events based on user input
void Events(int event){
    if(event>=0 && event<3){
        (*EventHandler[event])();
         return;
    }
    (*EventHandler[3])();
    
}



void main(){
    int i;
    printf("\nEnter a Number for Event Handler\n");
    printf("0 for ButtonClick\n1 for TimerExpire\n2 for SensorCatch\n: ");
    scanf("%d",&i);
    // calling Event Function
    // Events(i);
    // without calling Event Function
    (*EventHandler[i>=0?i<3?i:3:3])();
    

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


// Callback Functions: onButtonPress, onTimerExpiry, onSensorTrigger, and defaultAction are functions that act as callbacks for different events.

// Array of Function Pointers: eventHandlers is an array of pointers to these callback functions.

// Triggering Events: The Event function takes an integer event, uses it to index into the eventHandlers array, and calls the corresponding function. If the index is out of range, it calls defaultAction.