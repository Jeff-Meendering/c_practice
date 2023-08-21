/*
Write a C program to input length in centimeter and convert it to meter and kilometer. 
How to convert length from centimeter to meter and kilometer in C programming. 
Length conversion program in C from centimeter to meter and centimeter to kilometer.
*/

#include <stdio.h>

float convertToMeter(float cm) {
    return (cm/100.0);
}

float convertToKilometer(float cm) {
    return (cm/100000.0);
}

int main() {
    float cm;

    printf("Enter the centimeter number: ");
    scanf ("%f", &cm);

    float meter = convertToMeter(cm);
    float kilometer = convertToKilometer(cm);

    printf("Meters: %f", meter);
    printf("\nKilometer: %f", kilometer);

    return 0;
}