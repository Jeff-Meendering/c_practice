/*
Swap two numbers using pointers.
*/

#include <stdio.h>

void swap(int *first, int *second){
    int temp;
    temp = *first;
    *first = *second;
    *second = temp;
}

int main() {
    int num1, num2;

    printf("Enter the value for the first number: ");
    scanf("%d",&num1);
    printf("Enter the value for the second number: ");
    scanf("%d",&num2);

    printf("You set the first number to: %d, the second number to: %d\n",num1,num2);

    swap(&num1,&num2);

    printf("The first number is now: %d, second number is now: %d\n",num1,num2);

    return 0;
}