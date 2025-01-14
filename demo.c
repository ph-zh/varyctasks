#include <stdio.h>
#include <math.h>

int main() {

   double A;
   double B;
   double C;

   // & - adress of operator
   // % - format specifier
   // %lf - used for user input
   // %.2f - used for output
   // %.2f - shows 2 decimal places after the decimal point

   printf("Enter side A\n");
   scanf("%lf", &A); 

   printf("Enter side B\n");
   scanf("%lf", &B);

   C = sqrt(A*A + B*B);

   printf("Side C: %.2f\n", C);

return 0;
}