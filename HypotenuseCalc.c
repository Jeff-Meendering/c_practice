/*
Calculate hypotenuse
*/

#include <stdio.h>
#include <math.h>

double hypotenuseCalc(double side1, double side2) {
    return sqrt(powf(side1, 2) + powf(side2, 2));
}

int main() {
    double side1, side2, hypotenuse;
    printf("Enter the first side: ");
    scanf("%lf", &side1);
    printf("Enter the first side: ");
    scanf("%lf", &side2);

    hypotenuse = hypotenuseCalc(side1, side2);

    printf("hypotenuse: %lf", hypotenuse);

    return 0;
}