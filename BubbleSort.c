/*
Bubble sort
*/
#include <stdio.h>

int main() {
    int nums[4] = {6, 0, 3, 5};

    printf("Array before bubble sort: ");
    int a = 0;
    while(a < 4) {
        printf("%d ", nums[a]);
        a++;
    }

    for (int i = 0; i < 3; i++) {
        if (nums[i] > nums[i+1]) {
            int temp = nums[i];
            nums[i] = nums[i + 1];
            nums[i + 1] = temp;
        }
    }

    printf("Array after bubble sort: ");
    int b = 0;
    while(b < 4) {
        printf("%d ", nums[b]);
        b++;
    }

    return 0;
}