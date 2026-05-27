#include <stdio.h>

int main() {

    int age = 25;
    int year = 2025;
    int quantity = 2;
    float gpa = 2.5;
    float price = 19.99;
    float temperature = -10.1;

    printf("You are %d years old\n", age);
    printf("the year is %d\n", year);
    printf("You have ordered %d x items\n", quantity);
    printf("Your gpa is %.1f\n", gpa);
    printf("the price is %.2f\n", price);
    printf("the temperature is %f F\n", temperature);

    return 0;
}