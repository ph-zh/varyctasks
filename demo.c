#include <stdio.h>
int main() {
    #if __has_include(<stdalign.h>)
        printf("C11/C17 alignment support exists!\n");
    #else
        printf("No alignment support.\n");
    #endif
    return 0;
}