/*
Print all even numbers from 1 to n.
*/

#include <stdio.h>

int main() {
    int n, temp = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (temp <= n) {
        if (temp % 2 == 0) {
            printf("%d ", temp);
        }
        temp++;
    }

    return 0;
}