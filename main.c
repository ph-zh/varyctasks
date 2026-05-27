#include <stdio.h>
#include <stdbool.h> //header file

int main() {

    int age = 25;
    int year = 2025;
    int quantity = 2;
    float gpa = 2.5;
    float price = 19.99;
    float temperature = -10.1;
    double pi = 3.14159;
    double e = 2.71891984590;

    char grade = 'A';
    char symbol = '!';
    char currency = '$';
    char name[] = "Bro Code";
    char food[] = "pizza";
    char email[] = "fake123@gmail.com";
    bool isOnline = 1;

    printf("You are %d years old\n", age);
    printf("the year is %d\n", year);
    printf("You have ordered %d x items\n", quantity);
    printf("Your gpa is %.1f\n", gpa);
    printf("the price is %.2f\n", price);
    printf("the temperature is %f F\n", temperature);
    printf("the value of pi is %.3lf\n", pi);
    printf("the value of e is %.5lf\n",e);
    printf("your grade is %c\n", grade);
    printf("you favorite symbol is %c\n", symbol);
    printf("the currency is %c\n", currency);

    printf("hello %s\n", name);
    printf("you favorite food is %s\n", food);
    printf("your email is %s\n", email);

    printf("%d", isOnline);

    if (isOnline) {
        printf("ONLINE");
    } else {
        printf("OFFLINE");
    }

    return 0;
}