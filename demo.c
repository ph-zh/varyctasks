#include <stdio.h>

int main() {
    int days = 5;
    int moneyPerDay = 200;
    int sum = 0;

    for(int i = 1; i <= days; i++) {
        sum = sum + moneyPerDay;
        printf("Day %d already %d dollars\n", i, sum);
    }

    return 0;
}