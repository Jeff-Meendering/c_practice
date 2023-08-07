/*
Write a function that returns the position of the second occurrence of "zip" in a string, or -1 if it does not occur at least twice. Your code should be general enough to pass every possible case where "zip" can occur in a string.
Examples

findZip("all zip files are zipped") ➞ 18

findZip("all zip files are compressed") ➞ -1
*/

#include <stdio.h>

int findZip(char str[]) {
    int length;
    int firstZip = 0;

    for (length = 0; str[length] != '\0'; length++);

    for (int i = 0; i < length; i++) {
        if (firstZip == 0 && str[i] == 'z' && str[i+1] == 'i' && str[i+2] == 'p') {
            firstZip++;
        } else if (firstZip == 1 && str[i] == 'z' && str[i+1] == 'i' && str[i+2] == 'p') {
            return i;
        }
    }
    return -1;
}

int main() {
    char input[] = "all zip files are zipped";
    int solution = findZip(input);
    printf("position is of the second zip is in: %d", solution);
    return 0;
}