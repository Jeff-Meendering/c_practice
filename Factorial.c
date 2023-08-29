/*
Compute the factorial of a number.
*/

#include <stdio.h>

int main() {
    int number;
    int calc;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) {
        calc *= number;
        number--;
    }
    
    printf("Factorial output: %d", calc);

    return 0;
}