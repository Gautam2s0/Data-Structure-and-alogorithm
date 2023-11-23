// Pointer of structure

#include <stdio.h>

struct StructurePointer
{
    int num;
    char name;
};

struct StructurePointer s;

void main()
{
    s.num = 30;
    s.name = 'G';
    struct StructurePointer *ptr = &s;
    printf("Number = %d\nName = %c", ptr->num, ptr->name);
}