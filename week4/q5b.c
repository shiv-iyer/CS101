#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

int main(void) {
    bool non_letter_input = false;
    char character = 'c';

    while (!non_letter_input) {
        printf("Enter letter: ");
        // 'enter' is considered whitespace, so it stays in the buffer even after inputting.
        // it wasn't an infinite loop. to solve this, put an empty space before so the enter becomes an empty space
        scanf(" %c", &character);

        character = tolower(character);
        // if statement to check if the character is a letter
        if (character < 'a' || character > 'z') {
            non_letter_input = true;
            printf("Bye bye\n");
        } else {
            if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u') {
                printf("Vowel\n");
            } else {
                printf("Consonant\n");
            }
        }
    }
}