/*
Create a function that takes the length of the side of an equilateral triangle in centimeters and returns the height of the triangle in millimeters.
*/
#include <stdio.h>
#include <math.h>


double equilateralCalculate(double side) {
    return side * (sqrt(3) / 2) * 10;
}

int main() {
    double side;

    printf("Enter the length of one of the sides of the triangle in centimeters.\n");
    scanf("%lf", &side);

    double answer = equilateralCalculate(side);

    printf("\n%.1lf millimeters", answer);

    return 0;
}