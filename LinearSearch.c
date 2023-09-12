/*
Linear Search
*/


// C code to linearly search x in arr[].
  
#include <stdio.h>
  
int search(int arr[], int size, int testNum)
{
    for (int i = 0; i < size; i++){
        if (arr[i] == testNum){
            return i;
        }
    }
    return -1;
}

int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int testNum = 10;
    int size = sizeof(arr) / sizeof(arr[0]);
  
    int result = search(arr, size, testNum);
    (result == -1)
        ? printf("Element is not in the array")
        : printf("Element is at index %d", result);
    return 0;
}