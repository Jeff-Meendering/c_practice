#include <stdio.h>
#include <math.h>

int main() {
    float principal, time, rate;

    printf("Enter Principal ($): ");
    scanf("%f", &principal);

    printf("Enter Time (Years): ");
    scanf("%f", &time);

    printf("Enter Rate: ");
    scanf("%f", &rate);

    float ci = principal * pow((1 + (rate/100)), time);

    printf("Compound Interest: %.2f", ci);

    return 0;
}