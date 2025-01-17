#include <stdio.h>
#include <stdbool.h> // directive which allows to use Boolean data type (true or false)
// true: Equivalent to 1.
// false: Equivalent to 0.

int main() {

   // Logical operator = && (AND) checks if two conditions are true
   // Logical operator = || (OR) checks if at least one conditions is true

   // && = AND
   // || = OR
   // ! = NOT

   float temp = 25;

   if(temp <= 0 || temp >= 30) {
      printf("The weather is bad!\n");
   } else {
      printf("The weather is nice!\n");
   }

return 0;
}