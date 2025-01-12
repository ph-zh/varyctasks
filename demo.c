#include <stdio.h>
#include <string.h>

int main() {

    char name[25]; // bytes
    int age;

    printf("What your name?\n");
    // scanf("%s", &name); // function which allows to get user input before space
    fgets(name, 25, stdin); // function which allows to get user input with space
    name[strlen(name)-1] = '\0';
    
    printf("Ah, Ok, so you are %s\n", name);
    
    printf("How old are you ?\n");
    scanf("%d", &age);
    printf("You are %d years old\n", age);
    
    printf("Nice to meet you %s who is %d\n", name, age);

return 0;
}