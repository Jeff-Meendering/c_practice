/*
Create a function that counts the number of syllables a word has. Each syllable is separated with a dash -.
*/

#include <stdio.h>
#include <string.h>

int numberSyllables(char word[]) {
    int strLength;

    for (strLength = 0; word[strLength] != '\0'; ++strLength);

	int count = 1;
	for (int i = 0; i <= strLength; ++i) {
		if (word[i] == '-') {
			++count;
		}
	}
	return count;
}

int main() {
    char word[] = "Hello-World";

    printf("number of syllables in 'Hello-World': %d", numberSyllables(word));

    return 0;
}