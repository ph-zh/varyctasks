#include <stdio.h>

/* In C, the compiler processes the code from top to bottom.
   Declare the function at the beginning of the file or before main() 
   so the compiler knows about it when main calls it.
*/

void birthday();

int main() {

   birthday();


return 0;
}

void birthday() {
   printf("Hello1!\n");
   printf("Hello2!\n");
   printf("Hello3!\n");
}