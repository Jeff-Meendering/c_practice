/*
Write a function that recursively returns the number of vowels in a string.
    All letters will be in lower case.
    Vowels are: a, e, i, o, u.
*/

#include <stdio.h>
#include <string.h>

int countVowels(char* str) {
    int length = strlen(str);
    int pos = 0;
    int count = 0;

    while (pos < length) {
        if (str[pos] == 'a' || str[pos] == 'e' || str[pos] == 'i' || str[pos] == 'o' || str[pos] == 'u'){
            count++;
        }
    pos++;
    }

    return count;
}

int main() {
    char* test1 = "apple";
    char* test2 = "cheesecake";
    char* test3 = "bbb";
    char* test4 = "";

    printf("%s -> %d\n", test1, countVowels(test1));
    printf("%s -> %d\n", test2, countVowels(test2));
    printf("%s -> %d\n", test3, countVowels(test3));
    printf("%s -> %d\n", test4, countVowels(test4));

    return 0;
}