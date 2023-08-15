/*
Create a function that will return an integer number corresponding to the amount of digits in the given integer num.
*/

#include <stdio.h>

int numOfDigits(int num) {
    char text[100];
    sprintf(text, "%d", num);

    int pos = 0;
    int count = 0;

    while(text[pos] != '\0') {
        count++;
        pos++;
    }

    return count;
}

int main() {
    printf("Enter some numbers: \n");
    
    int input;
    scanf("%d", &input);

    int digitsCount = numOfDigits(input);
    printf("Number of digits: %d\n", digitsCount);

    return 0;
}