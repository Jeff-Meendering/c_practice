/*
Take an array of integers (positive or negative or both) and return 
the sum of the absolute value of each element.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input[100];
    const char s[2] = ",";
    int sum = 0;
    printf("Enter your numbers (example format: 1,2,3,4,5)\n");
    fgets(input, 100, stdin);

    char *token;

    token = strtok(input, s);

    int i =0;
    while(token != NULL) {
        sum += abs(atoi(token));
        token = strtok(NULL, s);
        i++;
    }

    printf("\n%d", sum);
    return 0;
}