#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void) {
    // randomly generated number, between 1 and 100. using the rand functiion from stdlib
    int random_number = rand() % 100 + 1;
    int user_guess = 0;
    int num_guesses = 0;
    char play_again = 'c';
    bool user_playing = true;

    while (user_playing) {
        printf("Enter your guess (1 to 100): ");
        scanf("%d", &user_guess);

        num_guesses++;

        if (user_guess == random_number) {
            printf("BINGPOT!\n");
            printf("You guessed in %d attempts.\n", num_guesses);

            printf("Do you want to play again? (Y/N): ");
            scanf(" %c", &play_again);

            if (play_again == 'N' || play_again == 'n') {
                user_playing = false;
                printf("Bye!\n");
            } else {
                // reset the guesses and random number
                random_number = rand() % 100 + 1;
                num_guesses = 0;
            }
        } else {
            if (user_guess > random_number) {
                printf("High! Try again\n");
            } else {
                printf("Low! Try again\n");
            }
        }
    }
}