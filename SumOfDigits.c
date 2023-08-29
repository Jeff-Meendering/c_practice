/*
Find the sum of all individual digits in a number.
*/

#include <stdio.h>

int main() {
    int num, p = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        int rem = num % 10;
        p = (p) + (rem);
        num /= 10;
    }

    printf("Sum: %d", p);

    return 0;
}