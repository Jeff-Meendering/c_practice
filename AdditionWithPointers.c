/*
Addition using pointers
*/

#include <stdio.h>

int main()
{
    double first, second, *p, *q, sum;
    
    printf("Enter two numbers to add: \n");
    scanf("%lf%lf", &first, &second);
    
    p = &first;
    q = &second;
    
    sum = *p + *q;
    
    printf("Sum: %lf\n",sum);
    
    return 0;
}