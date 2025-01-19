#include <stdio.h>

double square(double x) {
   return x * x * x;
}
// return == returns a value back to a caling function

int main() {

   double x = square(3.14);
   printf("%lf\n", x);
   return 0;
}
