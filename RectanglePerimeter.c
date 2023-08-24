/*
Write a C program to input length and width of a rectangle and calculate perimeter of the rectangle. 
How to find perimeter of a rectangle in C programming. Logic to find the perimeter of a rectangle if 
length and width are given in C programming.
*/

#include <stdio.h>

float perimeterCalc(float length, float width) {
    return (2 * (length + width));
}

int main() {
    float length, width = 0.0;

    printf("Enter the length: \n");
    scanf("%f", &length);

    printf("\nEnter the width: \n");
    scanf("%f", &width);

    float perimeter = perimeterCalc(length, width);

    printf("\nPerimeter: %f", perimeter);

    return 0;
}