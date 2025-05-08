#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {

    int secretCode;
    int pilotInput;
    srand(time(NULL));

    while(true) {
        secretCode = rand()%101;
        printf("Ракета SpaceY на орбите!\n");
        pilotInput = rand()%101;

        if(secretCode == pilotInput) {
            printf("Пилот угадал число! Летим домой!\n");
            break;
        }
    }
    return 0;
}