/*
calculate distance between two points given their coordinates.
*/

#include <stdio.h>
#include <math.h>

int main() {
    double x1, x2, y1, y2;

    printf("Enter the x of the first point: ");
    scanf("%lf", &x1);
    printf("Enter the y of the first point: ");
    scanf("%lf", &y1);
    printf("Enter the x of the second point: ");
    scanf("%lf", &x2);
    printf("Enter the y of the second point: ");
    scanf("%lf", &y2);

    double x = pow((x2 - x1), 2);
    double y = pow((y2 - y1), 2);

    double result = sqrt(x + y);

    printf("Distance: %f", result);

    return 0;
}