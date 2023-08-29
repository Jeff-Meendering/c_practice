/*
Write a C program to input two numbers from user and find their power using pow() function.
 How to find power of a number in C programming. How to use pow() function in C programming.
*/

#include <stdio.h>
#include <math.h>

int main() {
    float base, exponent;

    printf("Input base: \n");
    scanf("%f", &base);

    printf("Input exponent: \n");
    scanf("%f", &exponent);

    float output = powf(base, exponent);

    printf("Output: %f", output);

    return 0;
}