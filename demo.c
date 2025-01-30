#include <stdio.h>

enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

int main() {

    // enum (Enumeration) = a user defined type of named integer identifiers
    //                      helps to make a program more readable

    enum Day today = Sun;
    printf("%d\n", today); // enums are NOT Strings but they can be treated as int

    if (today == Sun || today == Sat) {
        printf("It's the weekend! Party time!\n");
    } else {
        printf("I have to work today\n");
    }

    return 0;
}