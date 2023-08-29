/*
Determine if an input number is odd or even.
*/

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("number is even");
    } else {
        printf("number is odd");
    }

    return 0;
}