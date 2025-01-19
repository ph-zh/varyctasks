#include <stdio.h>

// function cant see inside other function. Eg main and birthday
// arguments inside current function names parameters
// name of the parameters could be renamed unless they keep same type as char and int

void birthday(char x[], int y) {
   printf("Happy Birthday dear %s!\n", x);
   printf("You are %d yeas old!\n", y);
}

int main() {

   char name[] = "Franky Spignetty";
   int age = 21;
   // passing name and age variables as arguments
   birthday(name, age);

   return 0;
}
