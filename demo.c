#include <stdio.h>

void sort(char array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] < array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void printArray(char array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%c ", array[i]);
    }
}

int main() {

    // sort an array
    /*
    *int: Usually 4 bytes (32 bits).
    float: Usually 4 bytes (32 bits).
    double: Usually 8 bytes (64 bits).
    long double: Typically 10, 12, or 16 bytes, depending on the system.
     */

    char array[] = {'A','X','Z','E', 'C', 'F'};
    //int size = sizeof(array); // size of array in bytes
    // size of 1 int element is 4 bytes
    int size = sizeof(array)/sizeof(array[0]); // size of array
    // printf("%d\n", size);


    sort(array, size);
    printArray(array, size);

    return 0;
}