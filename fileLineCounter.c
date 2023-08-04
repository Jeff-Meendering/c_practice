/*
Write a program that takes a file as an argument and counts the total number of lines.
*/

#include <stdio.h>

int main() {
    FILE *file;

    char fileName[1024];

    printf("File: ");
    scanf("%s", fileName);

    file = fopen(fileName, "r");

    if (file == NULL) {
        printf("Error occured while trying to open the file.\n");
        return 1;
    }

    int line = 1;
    char c;
    do {
        c = fgetc(file);
        if (c == '\n') {
            line++;
        }
    } while (c != EOF);

    fclose(file);

    printf("lines: %d\n", line);

    return 0;
}