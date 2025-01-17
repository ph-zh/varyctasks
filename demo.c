#include <stdio.h>
#include <stdbool.h> // directive which allows to use Boolean data type (true or false)
// true: Equivalent to 1.
// false: Equivalent to 0.

int main() {

   // Logical operator = && (AND) checks if two conditions are true

   // && = AND
   // || = OR
   // ! = NOT

   float temp = 25;
   bool sunny = true;

   if(temp >= 0 && temp <= 30 && sunny){
      printf("The weather is good!\n");
   } else {
      printf("The weather is bad!\n");
   }

return 0;
}