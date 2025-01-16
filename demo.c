#include <stdio.h>

int main() {

   // switch = A more efficient alternative to using many "else if" statements
   //          allows a value to be tested for equality against many cases

   char grade;

   printf("\nEnter a letter grade: ");
   scanf("%c", &grade);

   // if(grade == 'A') {
   //    printf("Perfect!\n");
   // } else if (grade == 'B') {
   //    printf("You did good\n");
   // } else if (grade == 'C') {
   //    printf("You did okay\n");
   // } else if (grade == 'D') {
   //    printf("At least its not an F\n");
   // } else if (grade == 'F') {
   //    printf("Thats not a valid grade\n");
   // }

   switch(grade) {
      case 'A':
      printf("Perfect!\n");
      break;
      case 'B':
      printf("You did good\n");
      break;
      case 'C':
      printf("You did okay\n");
      break;
      case 'D':
      printf("At least its not an F\n");
      break;
      case 'F':
      printf("Thats not a valid grade\n");
      break;
      default:
      printf("Please enter only valid grades\n");
   }

return 0;
}