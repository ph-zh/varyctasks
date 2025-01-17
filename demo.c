#include <stdio.h>
#include <stdbool.h> // directive which allows to use Boolean data type (true or false)
// true: Equivalent to 1.
// false: Equivalent to 0.

int main() {

   // Logical operator = && (AND) checks if two conditions are true
   // Logical operator = || (OR) checks if at least one conditions is true
   // Logical operator = ! (NOT) reserse the state of a condition

   // && = AND
   // || = OR
   // ! = NOT

   bool sunny = false;

   if(sunny) {
      printf("its sunny outside!\n");
   } else {
      printf("its cloudy outside!\n");
   }


return 0;
}