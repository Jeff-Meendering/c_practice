/*
Matrix addition
*/

#include <stdio.h>

int main() {
    int matrix1[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int matrix2[3][3] = {{9,8,7}, {6,5,4}, {3,2,1}};
    int newMatrix[3][3];
    int pos = 3;

    for(int i = 0; i < pos; i++) {
        for(int j = 0; j < pos; j++) {
            newMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    for(int x = 0 ; x < pos ; x++) {
        for(int y = 0 ; y < pos ; y++){
            printf("%d ", newMatrix[x][y]);
        }
        printf("\n");
    }
    

    return 0;
}