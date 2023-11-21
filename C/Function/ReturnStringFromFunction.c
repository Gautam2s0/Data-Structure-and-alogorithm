#include <stdio.h>
#include <string.h>

 char *display();
void main()
{
     char *str;
    str = display();
    str[0] = 'M';
    printf("String is %s", str);
}

// to return a string from function
// char  display(){
//     return "Gautam";
// }

// here display function return only the first character of Gautam that is G or nothing will print;
// so return complete string use * like bellow
// char* display(){
//     return "Gautam";
// }

// to modify the string .
 char *display()
{
    static char str[60] ="Gautam";
    return str;
}
