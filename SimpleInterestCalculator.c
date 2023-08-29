/*
Write a C program to input principle, time and rate (P, T, R) from user and find Simple Interest. 
How to calculate simple interest in C programming. Logic to find simple interest in C program.
*/

#include <stdio.h>

int main() {
    float principal, time, rate;

    printf("Enter Principal ($): ");
    scanf("%f", &principal);

    printf("Enter Time (Years): ");
    scanf("%f", &time);

    printf("Enter Rate: ");
    scanf("%f", &rate);

    float simpleInterest = (principal * time * rate) / 100;

    printf("Simple interest: $%.2f", simpleInterest);

    return 0;
}