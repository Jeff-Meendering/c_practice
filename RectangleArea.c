/*
Write a C program to input length and width of a rectangle and find area of the given rectangle.
How to calculate area of a rectangle in C programming. Logic to find area of a rectangle whose 
length and width are given in C programming.
*/

#include <stdio.h>

float areaCalc(float length, float width) {
    return (length * width);
}

int main() {
    float length, width = 0.0;

    printf("Enter the length: \n");
    scanf("%f", &length);

    printf("\nEnter the width: \n");
    scanf("%f", &width);

    float area = areaCalc(length, width);

    printf("\nArea: %f", area);

    return 0;
}