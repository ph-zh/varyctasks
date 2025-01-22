#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Convert to Lowercase (strlwr)
void strupr(char *str) {
    while (*str) {
        *str = toupper(*str); // Convert each character to lowercase
        str++;
    }
}

// Convert to Uppercase (strupr)
void strlwr(char *str) {
    while (*str) {
        *str = tolower(*str); // Convert each character to lowercase
        str++;
    }
}

// Append string2 to the End of string1 (strcat)
void my_strcat(char *string1, const char *string2) {
    while (*string1) string1++; // Move to the end of string1
    while ((*string1++ = *string2++)); // Append string2 to string1
}

// Append n Characters from string2 to string1 (strncan)
void my_strncat(char *string1, const char *string2, size_t n) {
    while (*string1) string1++; // Move to the end of string1
    while (n-- && (*string1++ = *string2++)); // Append up to n characters
    *string1 = '\0'; // Null-terminate
}

// Copy string2 to string1 (strcpy)
void my_strcpy(char *string1, const char *string2) {
    while ((*string1++ = *string2++));
}

// Copy n Characters of string2 to string1 (strncpy)
void my_strncpy(char *string1, const char *string2, size_t n) {
    while (n-- && (*string1++ = *string2++));
    while (n--) *string1++ = '\0'; // Pad with null if string2 is shorter
}
// Set All Characters of a String to a Given Character (strset)
void strset(char *string, char ch) {
    while (*string) *string++ = ch;
}
//Set First n Characters of a String to a Given Character (strnset)
void strnset(char *string, char ch, size_t n) {
    while (n-- && *string) *string++ = ch;
}
// Reverse a String (strev)
void strev(char *string) {
    size_t len = strlen(string);
    for (size_t i = 0; i < len / 2; i++) {
        char temp = string[i];
        string[i] = string[len - i - 1];
        string[len - i - 1] = temp;
    }
}

//int result = strcmpi(string1, string1); // string compare all (ignore case)
int strcmpi(const char *str1, const char *str2) {
    while (*str1 && *str2) {
        char c1 = tolower((unsigned char)*str1);
        char c2 = tolower((unsigned char)*str2);
        if (c1 != c2) {
            return c1 - c2;
        }
        str1++;
        str2++;
    }
    return tolower((unsigned char)*str1) - tolower((unsigned char)*str2);
}

//int result = strnicmp(string1, string2, 1); // string compare n characters
int strnicmp(const char *str1, const char *str2, size_t n) {
    while (n > 0 && *str1 && *str2) {
        char c1 = tolower((unsigned char)*str1);
        char c2 = tolower((unsigned char)*str2);

        if (c1 != c2) {
            return c1 - c2; // Return difference
        }

        str1++;
        str2++;
        n--;
    }

    if (n == 0) {
        return 0; // Equal up to the first n characters
    }

    return tolower((unsigned char)*str1) - tolower((unsigned char)*str2);
}

int main() {

    char string1[] = "Bi";
    char string2[] = "Ba";

    // strlwr(string1); // converts a string to lowercase
    // strupr(string1); // coverts a string to uppercase
    // strcat(string1, string2); // appends string 2 to end of string1
    // strncat(string1, string2, 2); // appends n characters from string2 to string1
    // strcpy(string1, string2); // copy string2 to string1. This will remove the content of string1 and replace with string2
    // strncpy(string1, string2, 4); // copy n characters of string2 to string1

    // strset(string1, '$'); // sets all characters of string to given character
    // strnset(string1, 'F', 1); // sets first n characters of string to given character
    // strev(string1); // reverses a string

    // int result = strlen(string1); // returns string length as int
    // int result = strcmp(string1, string2); // string compare all characters
    // int result = strncmp(string1, string2, 1); // string compare n characters
    // int result = strcmpi(string1, string2); // string compare all (ignore case)
    int result = strnicmp(string1, string2, 1); // string compare n characters

    printf("%s\n", string1);
    //printf("%d\n", result);

    // int result = strcmp(string1, string2); // string compare all characters
    // if (result == 0) {
    //     printf("%s characters is EQUAL to %s characters", string1, string2);
    // } else {
    //     printf("%s characters is NOT equal to %s characters", string1, string2);
    // }

    // // int result = strncmp(string1, string2, 1); // string compare n characters
    // if (result == 0) {
    //     printf("Are the same");
    // } else {
    //     printf("Is not the same");
    // }

    // int result = strcmpi(string1, string1); // string compare all (ignore case)
    // if (result == 0) {
    //     printf("The strings are equal (case-insensitive).\n");
    // } else {
    //     printf("The strings are different.\n");
    // }

    // int result = strnicmp(string1, string2, 1); // string compare n characters
    if (result == 0) {
        printf("The strings are equal (case-insensitive, first 1 character).\n");
    } else {
        printf("The strings are different.\n");
    }

    return 0;
}