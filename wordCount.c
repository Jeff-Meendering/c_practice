/*
Create a function that takes a string and returns the word count. The string will be a sentence.
*/

#include <stdio.h>
#include <string.h>

int countWords(char sentence[]) {
    int count;

    if (sentence[0] == '\0') {
        return 0;
    } else {
        count = 0;
    }

    int length;
    for (length = 0; sentence[length] != '\0'; length++);
    for (int i = 0; i < length; i++) {
        if (sentence[i] != ' ' && sentence[i] != '\0' && (sentence[i+1] == ' ' || sentence[i+1] == '\0')) {
            count++;
        }
    }
    return count;
}

int main() {
    char sentence[100];
    printf("Enter your sentence here: \n");
    fgets(sentence, 100, stdin);
    sentence[strcspn(sentence, "\n")] = '\0';
    int wordCount = countWords(sentence);
    printf("\n Word Count: %d", wordCount);
    return 0;
}