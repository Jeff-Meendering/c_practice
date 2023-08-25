/*
Write a C program to input number of days from user and convert it to years,
 weeks and days. How to convert days to years, weeks in C programming. Logic to 
 convert days to years, weeks and days in C program.
*/

#include <stdio.h>

int main() {
    int days, weeks, years;

    printf("Enter the days: \n");
    scanf("%d", &days);

    years = (days / 365);
    weeks = (days % 365) / 7;
    days  = days - ((weeks * 7) + (years * 365));

    printf("\nYears: %d\nWeeks: %d\nDays: %d",years,weeks,days);
    

    return 0;
}