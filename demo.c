#include <stdio.h>
#include <stdbool.h>

int main() {
    // % represent a format specifier
   char a = '$'; // single character %c
   char b[] = "Franky Spignetti"; // array of characters %s

   float c = 3.14; // 4 bytes (32 bits of precision) 6-7 digits %f
   double d = 2.18; // 8 byets (63 bytes of precision) 15 - 16 digits %lf

   bool e = true; // 1 byte (true of false) %d

   // unsigned represents doubling or multipling by 2 of the original type (char, )
   char f = 63; // 1 byte (-128 to + 127) %d or %c
   unsigned char g = 254; // 1 byte ( 0 to + 255) %d or %c

   short h = 32767; // 2 bytes (-32,768 to + 32,767) %d 
   unsigned short i = 65535; // 2 bytes (0 to + 65,535) %d

   int j = 2147483647; // 4 bytes (-2147483648 to + 2147483647) %d
   unsigned int k = 4294967295; // 4 bytes (0 to 4294967295) %u

   long long int l = 9; // 8 bytes (-9 quintillion to + 9 quintillion) %lld
   unsigned long long int m = 8U; // 8 bytes (0 to + 18 quintillion) %llu

   // printf("%c\n", a); // char
   // printf("%s\n", b); // character array
   // printf("%0.15f\n", c); // float
   // printf("%0.15lf\n", d); // double
   // printf("%d\n", e); // bool
   // printf("%c\n", f); // char as numeric value
   // printf("%d\n", g); // unsigned char as numeric value
   // printf("%d\n", h); // short
   // printf("%d\n", i); // unsigned short
   // printf("%d\n", j); // int
   // printf("%u\n", k); // unsigned int
   // printf("%lld\n", l); // long log int
   // printf("%u\n", m); // unsigned long long int

return 0;
}