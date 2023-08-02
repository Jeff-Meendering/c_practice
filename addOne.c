#include <stdio.h>

int addition(int a) {
	return a + 1;
}

int main() {
    int sum = addition(5);
    printf("5 + 1 = %d", sum);
    return 0;
}