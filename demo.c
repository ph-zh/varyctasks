#include <stdio.h>

int main() {

    // memory = an array of bytes within RAM (street)
    // memory block = a single unit (byte) within memory, used to hold some value (person)
    // memory address = the address of where a memory block is located (house address)

    // decimal: 0-9 (1,2,3,4,5,6,7,8,9)
    // hexadecimal: 0-9 + A - F (0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F)

    char a = 'X';
    char b = 'Y';
    char c = 'Z';

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));

    printf("%p\n", &a); // p - is format specifier to see the address of variable
    printf("%p\n", &b);
    printf("%p\n", &c);

    return 0;
}