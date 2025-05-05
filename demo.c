#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int randomInt = rand()%1001;
    int userInput = -1;

    printf("Я загадал число от 0 до 1001.\n");
    printf("Ваш ход:\n");
    
    while(randomInt != userInput) {
        scanf("%d", &userInput);

        if (randomInt < userInput) { // Условие проверяется в цикле
            printf("Меньше\n");
        } else if (randomInt > userInput) {
            printf("Больше\n");
        } else {
            printf("Вы великолепны! Именно это я загадал.\n");
        }
    }
    return 0;
}