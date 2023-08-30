#include <stdio.h>

// program that prints ascending sequences of digits

int main(void) {
    int starting_digit = 0;
    int count_of_sequence = 0;

    printf("Enter count of ascending sequence: ");
    scanf("%d", &count_of_sequence);
    printf("Enter the starting digit: ");
    scanf("%d", &starting_digit);

    for (int i = 0; i < count_of_sequence; i++) {
        for (int j = starting_digit; j <= starting_digit + i; j++) {
            printf("%d", j);
        }
        printf(" ");
    }
    printf("\n");
}