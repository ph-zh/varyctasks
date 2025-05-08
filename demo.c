#include <stdio.h>

int main() {

    int sum = 0;
    int input = -1;
    

    while (input != 0) {
        scanf("%d", &input);
        sum = sum + input;
    }
    printf("Sum of the entered values: %d\n", sum);
    
    return 0;
}