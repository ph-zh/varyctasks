#include <stdio.h>

// ternary operator = shortcut to if/else when assigning/returning a value
// formula - (condition) ? value if true : value if false

int findMax(int x, int y) {
   return (x > y) ? x : y;
}

int main() {

   int max = findMax(5, 4);
   printf("%d\n", max);

   return 0;
}
