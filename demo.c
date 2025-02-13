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

    short d = 'A';
    short e = 'B';
    short f = 'C';

    int h = 'N';
    int i = 'O';
    int j = 'P';

    char x;
    double y[3];

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));

    printf("%p\n", &a); // p - is format specifier to see the address of variable
    printf("%p\n", &b);
    printf("%p\n", &c);

    printf("\n");

    printf("%d short\n", sizeof(d));
    printf("%d short\n", sizeof(e));
    printf("%d short\n", sizeof(f));

    printf("%p\n", &d);
    printf("%p\n", &e);
    printf("%p\n", &f);

    printf("\n");

    printf("%d int\n", sizeof(h));
    printf("%d int\n", sizeof(i));
    printf("%d int\n", sizeof(j));

    printf("%p\n", &h);
    printf("%p\n", &i);
    printf("%p\n", &j);

    printf("\n");

    printf("%d bytes\n", sizeof(x));
    printf("%d bytes\n", sizeof(y));

    printf("%p\n", &x);
    printf("%p\n", &y);

    return 0;
}