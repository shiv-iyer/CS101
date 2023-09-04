#include <stdio.h>
#include <stdbool.h>

// palindrome checker

int main(void) {
    int n = 1;
    int n_reversed = 0;
    bool user_is_inputting = true;

    while (user_is_inputting) {
        printf("Enter an integer: ");
        scanf("%d", &n);

        if (n == -1) {
            user_is_inputting = false;
            printf("Bye bye!\n");
        } else {
            int og_n = n;

            // check if palindrome
            while (n != 0) {
                int remainder = n % 10;
                n /= 10;
                n_reversed = n_reversed * 10 + remainder;
            }

            if (n_reversed == og_n) {
                printf("%d is a palindrome!\n", og_n);
            } else {
                printf("%d is not a palindrome.\n", og_n);
            }

            // reset n_reversed
            n_reversed = 0;
        }
    }
}