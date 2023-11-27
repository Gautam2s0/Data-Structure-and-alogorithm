#include <stdio.h>
#pragma pack(1)

struct PaddingAndPAcking
{
    char a;
    int b;
};

void main(){
    struct PaddingAndPAcking t;
    printf("%d",sizeof(t));  //o/p Before adding  (with padding)  : 8bytes
    // o/p After packing (Pragma pack(1)) : 5bytes
    int a=10,b=20; //swapping using XOR
    a^=b;
    b^=a;
    printf("\na= %d b=%d",a,b);

}
