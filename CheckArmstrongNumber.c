/*
Determine if a number is an Armstrong number (for 3 digit numbers, abc=a3+b3+c3abc=a3+b3+c3).
*/

#include <stdio.h>
#include <math.h>

int main() {
    int num = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;
    int p = 0;

    while(num > 0) {
        int rem = num % 10;
        p = (p) + (rem * rem * rem);
        num = num / 10;
    }

    if (temp == p) {
        printf("This is an Armstrong number.");
    } else {
        printf("This is not an Armstrong number.");
    }

    return 0;
}