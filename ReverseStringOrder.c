/*
Create a function that takes a string as its argument and returns the string in reversed order.
*/

#include <stdio.h>
#include <string.h>

char* reverseString(char* str) {
    char reverse;
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        reverse = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = reverse;
    }
    return str;
}

int main() {
    char word[100];

    printf("Enter a string:\n");
    fgets(word, sizeof(word), stdin);

    size_t len = strlen(word);
    if (len > 0 && word[len - 1] == '\n') {
        word[len - 1] = '\0';
    }

    char* newWord = reverseString(word);
    printf("%s\n", newWord);

    return 0;
}
