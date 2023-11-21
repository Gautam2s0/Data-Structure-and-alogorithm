#include <stdio.h>
#include <string.h>

char* display();
void main(){
    printf("String = %s",display());
}
// to return a string from function 
char display(){
    
    return "Gautam";
}
// here display function return only the first character of Gautam that is G;
// so return complete string use * like bellow
// char * display(){
//     return "Gautam"
// }


