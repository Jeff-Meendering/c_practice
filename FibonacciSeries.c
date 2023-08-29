/*
Print n numbers of the Fibonacci sequence.
*/

#include <stdio.h>

int main() {
    int n1=0, n2=1, n3, i, number;

    printf("Enter the number of elements for the Fibonacci sequence: ");
    scanf("%d", &number);

    for (int i = 2; i < number; i++) {
        n3 = n1 + n2;
        printf("%d ", n3);
        n1 = n2;
        n2 = n3;
    }

    return 0;
}