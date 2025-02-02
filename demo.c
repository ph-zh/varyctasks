#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses = 0;
    int answer;

    // uses the current time as a seed to generate random numbers
    srand(time(0));

    // generate a random number between MIN & MAX
    answer = (rand() % MAX) + MIN; // % as a modulus operator

    do {
        printf("Enter a number between 1 and 100: ");
        scanf("%d", &guess);
        if (guess < answer) {
            printf("The number is too small.\n");
        } else if (guess > answer) {
            printf("The number is too large.\n");
        } else {
            printf("The number is correct\n");
        }
        guesses++;
    } while (guess != answer);

    printf("*****************************\n");
    printf("The answer: %d\n", answer);
    printf("guesses: %d\n", guesses);
    printf("*****************************");

    return 0;
}