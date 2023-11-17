#include <conio.h>
#include <stdio.h>

int main()
{
    int a, b;
    char op;
    printf("enter the operator likes (+,-,*,/) : ");
    scanf("%c", &op);
    printf("enter the two numbers:");
    scanf("%d %d", &a, &b);

    switch (op)
    {
    case '+':
        printf("%d", a + b);
        break;
    case '-':
        printf("%d", a - b);
        break;
    case '/':
        printf("%d", a / b);
        break;
    case '*':
        printf("%d", a * b);
        break;
    }
    return 0;
}