#include <stdio.h>

int main(int argc, char** argv) {
    // Check for C standard version
    #if __STDC_VERSION__ >=  201710L
        printf("We are using C18!\n");
    #elif __STDC_VERSION__ >= 201112L
        printf("We are using C11!\n");
    #elif __STDC_VERSION__ >= 199901L
        printf("We are using C99!\n");
    #else
        printf("We are using C89/C90!\n");
    #endif

    // Indicate successful execution
    return 0;
}


// Explanation:

// In the exercise above -

// #include : This line includes the standard input-output library, which is necessary for using "printf".
// int main(int argc, char** argv): This is the main function with command-line arguments argc and argv. However, in this code, these arguments are not used.
// The code uses preprocessor directives (#if, #elif, #else, and #endif) to conditionally compile different print statements based on the version of the C standard detected by the compiler:
// #if __STDC_VERSION__ >= 201710L checks if the C standard version is greater than or equal to C18 (2017). If true, it prints "We are using C18!".
// #elif __STDC_VERSION__ >= 201112L checks if the C standard version is greater than or equal to C11 (2011). If true, it prints "We are using C11!".
// #elif __STDC_VERSION__ >= 199901L checks if the C standard version is greater than or equal to C99 (1999). If true, it prints "We are using C99!".
// #else is a fallback condition that triggers if none of the above conditions are met. It prints "We are using C89/C90!".
// return 0;: This line indicates the end of the main function and returns 0 to the operating system, indicating a successful program execution.