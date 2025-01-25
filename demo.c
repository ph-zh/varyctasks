#include <stdio.h>
#include <string.h>

int main() {
    // array of strings
    char cars[][10] = {"Mustang", "Corvette", "Camaro"};
    int size = sizeof(cars) / sizeof(cars[0]);
    printf("Number of cars in the pool: %d\n", size); // array size

    // cars[0] = "Tesla";
    strcpy(cars[0], "Tesla");
    for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++) {
        printf("%d. ", i + 1);
        printf("%s\n", cars[i]);
    }
    return 0;
}