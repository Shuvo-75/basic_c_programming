#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100 // Maximum length of each string

int main() {
    char strings[4][MAX_LENGTH]; // Array to store 4 strings, each of maximum length MAX_LENGTH

    printf("Enter 4 strings:\n");

    // Loop to input 4 strings
    for (int i = 0; i < 4; i++) {
        printf("Enter string %d: ", i + 1);
        fgets(strings[i], MAX_LENGTH, stdin);
        strings[i][strcspn(strings[i], "\n")] = '\0'; // Removing the newline character if present
    }

    printf("\nAnalysis of the strings:\n");

    // Loop to analyze and print the first letter, last letter, length, and character in the middle
    for (int i = 0; i < 4; i++) {
        int length = strlen(strings[i]);
        char first = strings[i][0];
        char last = strings[i][length - 1];

        printf("String %d: First letter: %c, Last letter: %c, Length: %d", i + 1, first, last, length);
        
        if (length > 2) {
            // Finding the middle character in the string
            int middle_index = length / 2;
            printf(", Middle character: %c", strings[i][middle_index]);
        }
        
        printf("\n");
    }

    return 0;
}
