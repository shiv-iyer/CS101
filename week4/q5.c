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

        // the isalpha function checks whether a character is an alphabetic value or not. if not, it will return 0
        if (isalpha(character) == 0) {
            non_letter_input = true;
            printf("Bye bye\n");
        } else {
            switch (tolower(character)) {
                // cases for all vowels, otherwise consonant
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    printf("Vowel\n");
                    break;
                default:
                    printf("Consonant\n");
                    break;
            }
        }
    }
}