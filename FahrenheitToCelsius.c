#include <stdio.h>

float fahrenheitToCelsius(float fahrenheit) {
    return ((fahrenheit-32)*5)/9;
}

int main() {

    float fahrenheit;

    printf("Enter the fahrenheit: \n");
    scanf("%f", &fahrenheit);
    
    float celsius = fahrenheitToCelsius(fahrenheit);

    printf("\nCelsius: %f", celsius);

    return 0;
}