/*
Given two words, the letter distance is calculated by taking the absolute value of the difference 
in character codes and summing up the difference.

If one word is longer than another, add the difference in lengths towards the score.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int letterDistance(char input1[], char input2[]){
    int i = 0;
    int sum = 0;
    while (input1[i] != '\0' && input1[i] != '\0') {
        sum = sum + ((int)input1[i] - (int)input2[i]);
        i++;
    }
    return abs(sum);
}

int main() {
    char input1[100];
    char input2[100];
    int sum;

    printf("enter your first word (no spaces): \n");
    scanf("%s", input1);
    printf("enter your second word (no spaces): \n");
    scanf("%s", input2);

    sum = letterDistance(input1, input2);

    printf("\nSum: %d",sum);
    return 0;
}