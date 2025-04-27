#include <stdio.h>

int main() {
    int flatsNumber = 5; // Количество квартир на этаже
    int floorsNumber = 10; // Количество этажей

    for (int i = 1; i <= floorsNumber; i++) {
        for (int j = 1; j <= flatsNumber; j++) {
            int currentFlat = (i - 1) * flatsNumber + j; // Заготовка формулы для учёта квартир
            printf("Этаж %d квартира %d — доставлено.\n", i, currentFlat);
        }
    }

    return 0;
}