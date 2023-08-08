/*
Create a function that finds the maximum range of a triangle's third edge, 
where the side lengths are all integers.
*/

#include <stdio.h>

int nextEdge (int side1, int side2) {
    return side1 + side2 - 1;
}

int main() {
    int side1;
    int side2;

    printf("Enter side 1 : ");
    scanf("%d", &side1);

    printf("\nEnter side 2: ");
    scanf("%d", &side2);

    int sum = nextEdge(side1, side2);
    printf("\nMax range of a triangles third edge: %d", sum);
    return 0;
}