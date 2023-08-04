/*
Given an integer n return a string array answer(1-indexed) where:
answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
answer[i] == "Fizz" if i is divisible by 3.
answer[i] == "Buzz" if i is divisible by 5.
answer[i] == i (as a string) if none of the above conditions are true
*/

#include <stdio.h>
#include <string.h>

int main() {

    int input;

    scanf("%d", &input);

    if (input%3 == 0 && input%5 == 0) {
        printf("FizzBuzz");
    } else if (input%3 == 0) {
        printf("Fizz");
    } else if (input%5 == 0) {
        printf("Buzz");
    } else {
        char str[20];
        sprintf(str, "%d", input);
    }

    return 0;
}