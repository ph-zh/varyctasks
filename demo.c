#include <stdio.h>

void birthday();

int main() {

   char name[] = "Franky Spignetty";
   int age = 21;
   birthday(name, age);

   return 0;
}

void birthday(char name[], int age) {
   printf("Happy Birthday dear! %s\n", name);
   printf("You are %d yeas old!\n", age);
}