#include <stdio.h>
#include <ctype.h>

int main() {

   char unit;
   float temp;

   printf("\nIs the temperature in (F) or (C)?: ");
   scanf("%c", &unit);

   // current function can read both Capital and Lower case letters
   unit = toupper(unit);
   // unit = tolower(unit);

   if(unit == 'C') {
      printf("\nEnter the temp in Celcius: ");
      scanf("%f", &temp);
      temp = (temp * 9 / 5) + 32;
      printf("\nThe temp in Fahrenheit is: %.1f\n", temp);

   } else if (unit == 'F') {
      printf("The temp is currently in Fahrenheit\n");
      scanf("%f", &temp);
      temp = (temp - 32) * 5 / 9;
      printf("\nThe temp in Celcius is: %.1f\n", temp);

   } else {
      printf("\n %c, is not a valid unit of measurement\n", unit);
   }

return 0;
}