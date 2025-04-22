#include <stdio.h>

int main() {
    int money = 500; // Деньги на корм
    int foodPerDay = 100; // Стоимость пачки корма
    int days = 0; // Дни, когда вы сможете покупать корм

    for(int i = money - foodPerDay; i >= 0; i = i - foodPerDay) {
        days = days + 3;
        printf("On %d day you will have %d Dollars\n", days, i);
    }
    printf("Your money will be enough for %d days\n", days);

    return 0;
}