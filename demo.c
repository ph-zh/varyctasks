#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
        char *dishes[] = {"Ризотто ", "Тартар ", "Шурпа ", "Панна-котта ", "Сашими "};
        char input[100]; // buffer for reading input as string
        int firstIndex;
        int secondIndex;

        printf("Вы продегустировали пять блюд.\n");
        printf("Введите индекс блюда, которое хотите переместить:\n");
        printf("0-Ризотто\n");
        printf("1-Тартар\n");
        printf("2-Шурпа\n");
        printf("3-Панна-котта\n");
        printf("4-Сашими\n");

        // Считайте из консоли индекс блюда, которое нужно переместить
        fgets(input, sizeof(input), stdin); // read String
        firstIndex = atoi(input);     // convert String to Int

        printf("Введите позицию, на которую хотите его переместить, от 0 до 4:\n");
        // Объявите переменную secondIndex для нового положения (индекса) блюда, считайте его из консоли
        fgets(input, sizeof(input), stdin); // read String
        secondIndex = atoi(input);     // convert String to Int

        // Сохраните значение блюда под индексом firstIndex в переменную swap
        char *swap = dishes[firstIndex];

        // Присвойте блюду с индексом firstIndex значение блюда под индексом secondIndex
        dishes[firstIndex] = dishes[secondIndex];

        // Присвойте блюду с индексом secondIndex значение переменной swap
        dishes[secondIndex] = swap;

        printf("Ваш рейтинг блюд:\n");
        printf("%s\n", dishes[0]);
        printf("%s\n", dishes[1]);
        printf("%s\n", dishes[2]);
        printf("%s\n", dishes[3]);
        printf("%s\n", dishes[4]);

    return 0;
}