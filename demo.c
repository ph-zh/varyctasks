#include <stdio.h>
#include <string.h>
#include <stdlib.h> // for atof()

int main() {
    double rateUSD = 78;
    double rateEUR = 85;
    double rateJPY = 0.74;
    double moneyBeforeSalary;
    double daysBeforeSalary;
    char command[100];
    char currency[100];
    char input[100]; // buffer for reading input as string

    printf("Сколько денег у вас осталось до зарплаты?\n");
    fgets(input, sizeof(input), stdin); // read input as string
    moneyBeforeSalary = atof(input); // convert string to double

    printf("Сколько дней до зарплаты?\n");
    fgets(input, sizeof(input), stdin); // read input as string
    daysBeforeSalary = atof(input); // convert string to double

    printf("Введите команду. Доступные команды: convert и advice.\n");
    fgets(command, sizeof(command), stdin);
    command[strcspn(command, "\n")] = 0;  // remove newline

    if(strcmp(command, "convert") == 0) {
        printf("В какую валюту хотите конвертировать рубли? Доступные варианты: USD, EUR, JPY.\n");
        fgets(currency, sizeof(currency), stdin);
        currency[strcspn(currency, "\n")] = 0;  // remove newline
        if(strcmp(currency, "USD") == 0) {
            printf("Ваши сбережения в долларах: %.2lf\n", moneyBeforeSalary / rateUSD);
        } else if(strcmp(currency, "EUR") == 0) {
            printf("Ваши сбережения в евро: %.2lf\n", moneyBeforeSalary / rateEUR);
        } else if(strcmp(currency, "JPY") == 0) {
            printf("Ваши сбережения в иенах: %.2lf\n", moneyBeforeSalary / rateJPY);
        } else {
            printf("Валюта не поддерживается.\n");
        }
    } else if(strcmp(command, "advice") == 0) {
        if(moneyBeforeSalary < 3000) {
            printf("Сегодня лучше поесть дома. Экономьте, и вы дотянете до зарплаты!\n");
        } else if(moneyBeforeSalary < 10000) {
            if(daysBeforeSalary < 10) {
                printf("Окей, пора в Макдак!\n");
            } else {
                printf("Сегодня лучше поесть дома. Экономьте, и вы дотянете до зарплаты!\n");
            }
        } else if(moneyBeforeSalary < 30000) {
            if(daysBeforeSalary < 10) {
                printf("Неплохо! Прикупите долларов и зайдите поужинать в классное место. :)\n");
            } else {
                printf("Окей, пора в Макдак!\n");
            }
        } else {
            if(daysBeforeSalary < 10) {
                printf("Отлично! Заказывайте крабов!\n");
            } else {
                printf("Неплохо! Прикупите долларов и зайдите поужинать в классное место. :)\n");
            }
        }
    } else {
        printf("Извините, такой команды пока нет.\n");
    }

    return 0;
}