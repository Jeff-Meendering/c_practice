/*
Number to words conversion
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char * convertNumberIntoArray(unsigned int number, unsigned int *length) {
    *length = (int)(log10((float)number)) + 1;
    char *arr = (char *) malloc(*length * sizeof(char));
    for (unsigned int i = 0; i < *length; i++) {
        arr[*length - i - 1] = number % 10;
        number /= 10;
    }
    return arr;
}

int main() {
    int num, pos = 0;
    unsigned int length = 0;
    
    printf("Enter numbers: ");
    scanf("%d", &num);

    char *nums = convertNumberIntoArray(num, &length);

    for (pos = 0; pos < length; pos++) {
        switch (nums[pos])
        {
        case 0: printf("Zero "); break;
        case 1: printf("One "); break;
        case 2: printf("Two "); break;
        case 3: printf("Three "); break;
        case 4: printf("Four "); break;
        case 5: printf("Five "); break;
        case 6: printf("Six "); break;
        case 7: printf("Seven "); break;
        case 8: printf("Eight "); break;
        case 9: printf("Nine "); break;
        default: break;
        }
    }

    free(nums);
    return 0;
}