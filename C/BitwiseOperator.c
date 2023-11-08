#include <stdio.h>

int main() {
    int a=10,b=6;
    printf("%d\n",a&b);
    printf("%d\n", a|b);
    printf("%d\n",a^b);
    printf("%d",a&b && b+1 ||0);

    return 0;
}
// O/P: 
// 2
// 14
// 12
// 1