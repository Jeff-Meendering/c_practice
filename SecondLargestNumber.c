/*
Find the second largest number in an arry.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    char charArr[200];
    int nums[100];
    int i = 0;

    printf("Enter an array of characters with a ',' in between each one (examper layout: 1,2,3,4,5):");
    scanf("%s", charArr);

    char *token =strtok(charArr, ",");
    while (token != NULL) {
        nums[i++] = atoi(token);
        token = strtok(NULL, ",");
    }

    int first_max = INT_MIN, second_max = INT_MIN;

    for (int j = 0; j < i; j++) {
        if(nums[j] > first_max) {
            first_max = nums[j];
        }
    }

    for(int j = 0; j < i; j++) {
        if(nums[j] > second_max && nums[j] < first_max) {
            second_max = nums[j];
        }
    }

    printf("Second largest number is: %d\n", second_max);

    return 0;
}