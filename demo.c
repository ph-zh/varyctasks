#include <stdio.h>

int main() {

    double goal = 1000000;
    double interestRate = 0.05;
    int years = 0;
    double balance;

    printf("Сколько денег у вас сейчас: \n");
    scanf("%lf", &balance);

    while(balance <= goal) {
        balance = balance + balance * interestRate;
        years = years + 1;
    }
    printf("in %d years you will collect %.0f dollars\n", years, goal);

    return 0;
}