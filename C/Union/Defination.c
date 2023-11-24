// The Union is a user-defined data type in C language that can contain
// elements of the different data types just like structure.
// But unlike structures, all the members in the C union are stored in the same memory location.
// Due to this, only one member can store data at the given instance.

// In union if we have three member value first two value will override by third, so we can access only one value at the time
// this is main disadvantage of union.
// union consume less memory as compare to structure.
// Union and structure both are same only difference is the memory allocation.

// union union_name {
//     datatype member1;
//     datatype member2;
//     ...
// };

// C Program to demonstrate how to use union
#include <stdio.h>

// union template or declaration
union un
{
    int member1;
    char member2;
    float member3;
};

// driver code
int main()
{

    // defining a union variable
    union un var1;

    // initializing the union member
    var1.member1 = 15;
    var1.member2 = 'a';

    printf("The value stored in member1 = %d\n",
           var1.member1);
    // if here only present member1 then it give 15, 
    //if we assign member2 then it override the member1 in memory 
    //that's why it give some garbge value or some ascii value 
    printf("The value stored in member2 = %c",
           var1.member2);

    return 0;
}
