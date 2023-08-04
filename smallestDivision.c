/*
 2520 is the smallest number that can be divided by each of the numbers from 1 to 10
 without any remainder. What is the smallest positive number that is evenly divisible 
 by all the numbers from 1 to 20?
*/

#include <stdio.h>
#include <stdbool.h>

int main() {

    int i = 1;
    
    while (true) {
        if (i%1 == 0 && i%2 == 0 && i%3 == 0 && i%4 == 0 && i%5 == 0 && i%6 == 0 && i%7 == 0 && i%8 == 0 && i%9 == 0 && i%10 == 0 && i%11 == 0 && i%12 == 0 && i%13 == 0 && i%14 == 0 && i%15 == 0 && i%16 == 0 && i%17 == 0 && i%18 == 0 && i%19 == 0 && i%20 == 0) {
            break;
        }
        i++;
    }

    printf("Smallest positive number that is evely divisible by numbers 1-12: %d", i);

    return 0;
}