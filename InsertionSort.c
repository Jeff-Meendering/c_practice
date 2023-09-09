/*
Insertion Sort
*/

#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, j, k;
    for (i=1; i < n; i++) {
        k = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > k) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = k;
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};

    int n = sizeof(arr) / sizeof(arr[0]);
 
    printf("Before insertion sort: ");

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    insertionSort(arr, n);

    printf("After insertion sort: ");

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}