#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    double rateUSD = 78;
    double rateEUR = 85;
    double rateJPY = 0.74;
    double moneyBeforeSalary;
    int daysBeforeSalary;
    int currency;
    int command;
    char input[100]; // buffer for reading input as String

    printf("Сколько денег у вас осталось до зарплаты?\n");
    fgets(input, sizeof(input), stdin); // read String
    moneyBeforeSalary = atof(input);    // convert String to Double

    printf("Сколько дней до зарплаты?\n");
    fgets(input, sizeof(input), stdin); // read String
    daysBeforeSalary = atoi(input);     // convert String to Int

    while (true) {
        printf("Что вы хотите сделать? \n");
        printf("1 - Конвертировать валюту\n");
        printf("2 - Получить совет\n");
        printf("0 - Выход\n"); // Новый пункт меню, осталось только реализовать логику

        fgets(input, sizeof(input), stdin);
        command = atoi(input);

        if (command == 1) {
            printf("В какую валюту хотите конвертировать? Доступные варианты: 1 - USD, 2 - EUR или 3 - JPY.\n");
            fgets(input, sizeof(input), stdin);
            currency = atoi(input);

            if (currency == 1) {
                printf("Ваши сбережения в долларах: %.2f\n", moneyBeforeSalary / rateUSD);
            } else if (currency == 2) {
                printf("Ваши сбережения в евро: %.2f\n", moneyBeforeSalary / rateEUR);
            } else if (currency == 3) {
                printf("Ваши сбережения в йенах: %.2f\n", moneyBeforeSalary / rateJPY);
            } else {
                printf("Валюта не поддерживается.\n");
            }
        } else if (command == 2) {
            if (moneyBeforeSalary < 3000) {
                printf("Сегодня лучше поесть дома. Экономьте и вы дотянете до зарплаты!\n");
            } else if (moneyBeforeSalary < 10000) {
                if (daysBeforeSalary < 10) {
                    printf("Окей, пора в Макдак!\n");
                } else {
                    printf("Сегодня лучше поесть дома. Экономьте и вы дотянете до зарплаты!\n");
                }
            } else if (moneyBeforeSalary < 30000) {
                if (daysBeforeSalary < 10) {
                    printf("Неплохо! Прикупите долларов и зайдите поужинать в классное место. :)\n");
                } else {
                    printf("Окей, пора в Макдак!\n");
                }
            } else {
                if (daysBeforeSalary < 10) {
                    printf("Отлично! Заказывайте крабов!\n");
                } else {
                    printf("Неплохо! Прикупите долларов и зайдите поужинать в классное место. :)\n");
                }
            }
        } else if (command == 0) {
            printf("Выход\n");
            break;
        } else {
            printf("Извините, такой команды пока нет.\n");
        }
    }
    return 0;
}