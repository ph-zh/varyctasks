#include <stdio.h>
#include <string.h>

struct Student {
    char name[12];
    float gpa;
};

int main() {

    struct Student student1 = {"Frank", 3.0};
    struct Student student2 = {"John", 4.5};
    struct Student student3 = {"Billy", 2.2};
    struct Student student4 = {"Zeberdy", 5.1};

    struct Student students[] = {student1, student2, student3, student4};

    for (int i = 0; i < sizeof(students)/sizeof(students[0]); i++) {
        printf("%-12s", students[i].name); // -12 make indent / formatting to right
        printf("%.2f\n", students[i].gpa);
    }

    return 0;
}