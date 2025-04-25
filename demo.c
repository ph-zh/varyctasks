#include <stdio.h>

int main() {
    int counter = 0;
    for (int i = 0; i < 10; i = i + 1) {
        if (i > 7) {
            counter = counter + 2;
        }
        counter = counter + 1;
    }
    printf("%d\n", counter);

    return 0;
}