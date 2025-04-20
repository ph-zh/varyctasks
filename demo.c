#include <stdio.h>

int main() {
    int secondsBeforeStart = 70;

    for(int i = secondsBeforeStart; 0 <= i; i = i - 7) {
        printf("До старта SpaceY остаось %d\n", i);
    }
    printf("Поехали! Узнаем, есть ли жизнь на Марсе!\n");


    return 0;
}