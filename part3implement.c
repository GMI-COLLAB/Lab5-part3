#include <stdio.h>
#include <string.h>

#define MAX_BUF 1000

int main() {
    char text[MAX_BUF];
    int letterCounts[26] = {0}; // Initialize counts for each letter to zero

    puts("Enter text (an empty line to exit):");
    while (fgets(text, MAX_BUF, stdin) != NULL) {
        // Process each character in the text b
        for (int i = 0; text[i] != '\0'; i++) {
            char c = text[i];
            if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
                // This character is a letter, update the count
                int index = (c >= 'A' && c <= 'Z') ? (c - 'A') : (c - 'a');
                letterCounts[index]++;
            }
        }

        // Check for an empty line to exit
        if (text[0] == '\n') {
            break;
        }
    }

    // Print the counts for each letter
    for (int i = 0; i < 26; i++) {
        char letter = 'A' + i; // Get the corresponding letter
        printf("%c: %d ", letter, letterCounts[i]);
    }

    return 0;
}


