#include <stdio.h>
// x and y represents parameters, they could have any name unless type is the sae with the arguments
void birthday(char x[], int y) { 
   printf("Happy Birthday dear %s!\n", x);
   printf("You are %d years old!\n", y);
}

int main() {
   char name[] = "Frank";
   int age = 21;

   birthday(name, age); // name and age are arguments
   return 0;
}