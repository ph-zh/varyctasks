#include <stdio.h>

int main() {

    double prices[] = {5.0, 10.00, 15.0, 25.0, 20.0, 30.0};
    // sizeof from array shows as 6 elements multyply on 8, which is size of 1 double element
    // printf("%d bytes\n", sizeof(prices));

    for (int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++) {
        printf("$%.2lf\n", prices[i]);
    }
    return 0;
}