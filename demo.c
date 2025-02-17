#include <stdio.h>

int main() {

    FILE *pF = fopen("/home/username/Downloads/test.txt", "w");

    fprintf(pF, "John Silvestra\n");

    fclose(pF);

    if (remove("/home/username/Downloads/test.txt") == 0) {
        printf("That file was deleted successfully!");
    } else {
        printf("That file was NOT deleted!");
    }
    return 0;
}