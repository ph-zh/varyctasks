#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*
   Function prototype
   What is it ?
   Function declaration, w/o a body, before main()
   Ensures that calls to a function are made with the correct arguments
 */

void sayHello();
void buyPizza();

int findMin(int x, int y) {
    printf("And how many pizzas you want cockroach ? \n");
    if (x < y) {
        printf("Give me my money and have a great day! ? \n");
        return x;
    } else {
        printf("its free of charge sir, just today \n");
        return y;
    }
}

int main() {

    char name[] = "Jerry Springer";
    int age = 12;
    int max = findMin(3,5);
    sayHello(name, age);
    buyPizza();
    printf("OK, so this is the price you need to give: %d \n", max);

   return 0;
}

void sayHello(char x[], int y) {
    printf("Hey, yes you. What is your name ?\n");
    printf("Your name is Mr %s correct ? \n", x);
    printf("What is your age ? Dont tell me, i know, you are %d \n", y);
}

void buyPizza() {
    char profession[25];
    bool pizzaWithFish = true;

    printf("What is your profession?\n");
    fgets(profession, 25, stdin);
    profession[strlen(profession)-1] = '\0';
    printf("OK, nice to mee you %s\n", profession);
    printf("So, lets proceed with Pizza. It will be: \n");

    if (pizzaWithFish) {
        printf("Hmm, pizza with a fish .... \n");
    } else {
        printf("Forget it you damn palooka \n");
    }
}