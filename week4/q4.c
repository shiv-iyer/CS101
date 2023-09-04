#include <stdio.h>

// take in a positive integer, and display the number of digits in that integer

int main(void) {
    int user_input = 0;
    int sum_of_digits = 0;

    printf("Please enter a positive integer ONLY: ");
    scanf("%d", &user_input);

    // if not a positive integer, bye
    if (user_input < 0) {
        printf("Bye!\n");
    } else {
        while (user_input > 0) {
            user_input /= 10;
            sum_of_digits++;
        }
    }

    printf("Sum of digits: %d\n", sum_of_digits);
}