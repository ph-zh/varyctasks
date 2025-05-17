#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
        char *currencies[] = {"USD ", "EUR ", "JPY ", "RUB\n"};
        char input[100];
        int country;

        printf("В вашем тревел-кошельке доступны следующие валюты:\n");
        printf("%s", currencies[0]);
        printf("%s", currencies[1]);
        printf("%s", currencies[2]);
        printf("%s", currencies[3]);

        printf("Если вы планируете поездку в Данию, введите 1, а если в Китай, введите 2\n");
        fgets(input, sizeof(input), stdin); // read String
        country = atoi(input);     // convert String to Int
        

        // Если выбрана Дания, измените значение элемента евро на кроны DKK
        // Если Китай, измените значение элемента иена на юани CNY
        if (country == 1) {
            currencies[1] = "DKK ";
        } else if (country == 2) {
            currencies[2] = "CNY ";
        }

        printf("В вашем тревел-кошельке доступны следующие валюты:\n");
        printf("%s", currencies[0]);
        printf("%s", currencies[1]);
        printf("%s", currencies[2]);
        printf("%s", currencies[3]);

    return 0;
}