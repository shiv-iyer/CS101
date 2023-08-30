#include <stdio.h>

// FizzBuzz!

int main(void) {
    int to_be_fizzbuzzed = 0;

    printf("Please enter a number: ");
    scanf("%d", &to_be_fizzbuzzed);

    // can't start at 0 because 0 % 3 and 0 % 5 is 0, hence starts with a FizzBuzz.
    for (int i = 1; i <= to_be_fizzbuzzed; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz ");
        } else if (i % 3 == 0) {
            printf("Fizz ");
        } else if (i % 5 == 0) {
            printf("Buzz ");
        } else {
            printf("%d ", i);
        }
    }
}