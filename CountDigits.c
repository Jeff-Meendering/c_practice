/*
Count the number of digits in a given integer.
*/

#include <stdio.h>
#include <string.h>

int main() {
    int num;
    char str[50];

    printf("Enter a number: ");
    scanf("%d", &num);

    sprintf(str, "%d", num);

    int length = strlen(str);

    printf("Length: %d", length);

}