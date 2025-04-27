#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int dayCount = 0; // Для учёта дней накоплений
    int moneyTotal = 0; // Суммарное количество накоплений
    int moneyToday; // Сколько откладываем сегодня
    int goal = 5000; // Финансовая цель

    srand(time(NULL));

    while (moneyTotal <= goal) {
        moneyToday = rand()%300; // Случайная сумма на сегодня
        moneyTotal = moneyTotal + moneyToday; // Добавили эти деньги в копилку
        dayCount = dayCount + 1; // Засчитали день
    }

    printf("Ура! Вы смогли накопить %d за %d дней.\n", goal, dayCount);
    return 0;
}