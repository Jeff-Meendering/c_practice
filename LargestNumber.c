/*
Take three numbers as input and print the largest one.
*/

#include <stdio.h>

int main() {
    float num1, num2, num3;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Enter the third number: ");
    scanf("%f", &num3);

    if (num1 > num2 && num1 > num3) {
        printf("The first number is the largest");
    } else if (num2 > num1 && num2 > num3) {
        printf("The second number is the largest");
    } else if (num3 > num2 && num3 > num1) {
        printf("The third number is the largest");
    }

    return 0;
}