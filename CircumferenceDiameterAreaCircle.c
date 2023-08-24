/*
Write a C program to input radius of a circle from user and find diameter, circumference and area of the circle. 
How to calculate diameter, circumference and area of a circle whose radius is given by user in C programming. 
Logic to find diameter, circumference and area of a circle in C.
*/

#include <stdio.h>
#include <math.h>

float circumferenceCalc(float radius) {
    return (2*M_PI*radius);
}

float areaCalc(float radius) {
    return ((radius*radius)*M_PI);
}

float diameterCalc(float radius) {
    return (radius*2);
}

int main() {

    float radius, diameter, area, circumference;

    printf("Enter radius: \n");
    scanf("%f", &radius);

    diameter = diameterCalc(radius);
    area = areaCalc(radius);
    circumference = circumferenceCalc(radius);

    printf("diameter: %f\narea: %f\ncircumference: %f",diameter, area, circumference);

    return 0;
}