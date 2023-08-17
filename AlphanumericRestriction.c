/*
Create a function that returns true if the given string has any of the following:

    Only letters and no numbers.
    Only numbers and no letters.

If a string has both numbers and letters, or contains characters which don't fit into any category, return false
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool alphanumericRestriction(char* str) {
    int stringLength = strlen(str);
    int i = 0;
    bool hasLetters = false;
    bool hasNumbers = false;
    
    while (i < stringLength) {
        if (isalpha(str[i])) {
            hasLetters = true;
        } else if (isdigit(str[i])) {
            hasNumbers = true;
        } else {
            return false;
        }

        if (hasLetters && hasNumbers) {
            return false;
        }

        i++;
    }
    
    return (hasLetters || hasNumbers);
}

int main() {
    char* test1 = "abc";
    char* test2 = "123";
    char* test3 = "abc123";
    char* test4 = "abc!";
    char* test5 = "";

    printf("%s -> %s\n", test1, alphanumericRestriction(test1) ? "true" : "false");
    printf("%s -> %s\n", test2, alphanumericRestriction(test2) ? "true" : "false");
    printf("%s -> %s\n", test3, alphanumericRestriction(test3) ? "true" : "false");
    printf("%s -> %s\n", test4, alphanumericRestriction(test4) ? "true" : "false");
    printf("\"%s\" -> %s\n", test5, alphanumericRestriction(test5) ? "true" : "false");

    return 0;
}