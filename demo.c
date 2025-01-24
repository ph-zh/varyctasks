#include <stdio.h>

int main() {

    // for loop = repeats a section of code a limited amount of times
    // 3 statements needed: declare index (i), condition (i >= 1), increment/decrement of the index)

    for(int i = 10; i >= 1; i-=3) {
        printf("%d\n", i);
    }
    return 0;
}