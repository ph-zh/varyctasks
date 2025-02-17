#include <stdio.h>

void printAge(int pAge) {
    printf("You are %d age old\n", pAge); // dereference
}
int main() {

    // pointer = a "variable-like" reference that holds a memory address to another variable, array, etc.
    //           some tasks are performed more easily with pointers
    //           * = indirection operator (value to address)

    // advantages of using pointers
    // - less time in program execution.
    // - working on the original variable.
    // - with the help of pointers, we can create data structures (linked-list, stack, queue).
    // - returning more than one values from functions.
    // - searching and sorting large data very easy.
    // - dynamically memory allocation.

    int age = 21;
    int *pAge = NULL; // good practice to assign NULL if declaring a pointer
    pAge = &age;

    // printf("address of age: %p\n", &age);
    // printf("value of pAge: %p\n", pAge);
    //
    // printf("size of age: %d bytes\n", sizeof(age));
    // printf("size of pAge: %d bytes\n", sizeof(pAge));
    //
    // printf("value of age: %d\n", age);
    // printf("value at stored address: %d\n", *pAge);

    printAge(*pAge);

    return 0;
}