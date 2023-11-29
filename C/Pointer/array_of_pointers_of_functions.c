#include <stdio.h>

// Function Prototypes
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main() {
    // Function table (array of pointers to functions)
    int (*functionTable[])(int, int) = {add, subtract, multiply, divide};

    int choice, a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Choose an operation:\n");
    printf("0: Add\n1: Subtract\n2: Multiply\n3: Divide\n");
    printf("Enter your choice (0-3): ");
    scanf("%d", &choice);

    // Check if the choice is within the valid range
    if (choice >= 0 && choice <= 3) {
        // Call the selected function from the function table
        int result = functionTable[choice](a, b);
        printf("Result: %d\n", result);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}

// Function Implementations
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero!\n");
        return 0;
    }
}