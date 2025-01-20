/*
 * Function prototype
 * What is it ?
 * Function declaration, w/o a body, before main()
 * Ensures that calls to a function are made with correct arguments
 *
 * IMPORTANT NOTES
 * Many C compilers do not check for the parameter matching
 * Missing arguments will result in unexpected behavior
 * A function prototype causes the compiler to flag an error if arguments are missing
 *
 * ADVANTAGES
 * 1. Easier to navigate a program w/ main() at the top
 * 2. Heps with debugging
 * 3. Commonly used in header files
 */
#include <stdio.h>

void hello(char name[], int age); // function prototype declaration

int main() {

    char name[] = "Billy";
    int age = 60;
    hello(name, age);
    return 0;
}

void hello(char name[], int age) {
    printf("Hello %s you are %d years old\n", name, age);
}