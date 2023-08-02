#include <stdio.h>

double converter(double celcius) {
    double fahrenheit = celcius * 1.8 + 32;
    return fahrenheit;
}

int main() {
    double tempCelcius;
    printf("Enter celcius temp: ");
    scanf("%lf", &tempCelcius);
    double res = converter(tempCelcius);
    printf("\nFahrenheit: %lf", res);
    return 0;
}