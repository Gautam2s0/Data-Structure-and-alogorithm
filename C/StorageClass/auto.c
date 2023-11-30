//This is the default storage class for all the variables declared inside a function or a block.
//Auto variables can be only accessed within the block/function they have been declared and not outside them (which defines their scope).
// Of course, these can be accessed within nested blocks within the parent block/function in which the auto variable was declared.

// auto storage class can't declare globally;
// auto storage class can't declare globally;
// however we have declare variable as global we don't use auto class;

#include <stdio.h>
// can't declare as global;
//  auto int a;
// we can declare like int a only for global

void main(){
    auto int a=10;
    printf("a = %d ",a);

}