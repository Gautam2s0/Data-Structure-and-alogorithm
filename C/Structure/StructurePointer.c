// Pointer of structure

#include <stdio.h>

struct StructurePointer
{
   int num;
   char name[20];
};

struct StructurePointer s;


void main(){
    s.num=30;
    s.name="Gautam";
    struct StructurePointer *ptr=&s;
    printf("Number = %d\nName = %s",ptr->num,ptr->name);
}