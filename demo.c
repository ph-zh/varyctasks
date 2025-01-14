#include <stdio.h>

int main() {

   const double PI = 3.14159;
   double radius;
   double circumreference;
   double area;

   printf("Enter radius of a circle: \n");
   scanf("%lf", &radius);

   circumreference = 2 * PI * radius;
   area = PI * radius * radius;

   printf("circumreference: %lf\n", circumreference);
   printf("area: %lf\n", area);

return 0;
}