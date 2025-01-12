#include <stdio.h>

int main() {
   
int x; // declaration
x = 10;// initialization
int y = 20; // declaration + initialization

int age  = 15;
float gpa = 2.05;//floating point number
char currency = '$'; // single character
char name[] = "Frank"; // array of charactes

printf("Hello %s\n", name);
printf("You are %.d years old\n", age);
printf("You have %f cois in the pocket\n", gpa);
printf("Your favorite currency is %c\n", currency);
return 0;
}