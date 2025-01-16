#include <stdio.h>


int main() {

   char operator;
   double num1;
   double num2;
   double result;

   printf("Enter an operator (+ - * /): ");
   scanf("%c", &operator);

   printf("Enter num1 :\n");
   scanf("%lf", &num1);

   printf("Enter num2 :\n");
   scanf("%lf", &num2);

   switch(operator) {
      case '+':
         result = num1 + num2;
         printf("Result of + operator is: %.2lf\n", result);
         break;
      
      case '-':
         result = num1 - num2;
         printf("Result of - operator is: %.2lf\n", result);
         break;
      
      case '*':
         result = num1 * num2;
         printf("Result of * operator is: %.2lf\n", result);
         break;
      
      case '/':
         result = num1 / num2;
         printf("Result of + is: %.2lf\n", result);
         break;
      
      default:
         printf("%c is not valid\n", operator);
         break;
   }

return 0;
}