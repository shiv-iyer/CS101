#include <stdio.h>

// beginning of optional questions

int main(void) {
    int start = 0;
    int end = 0;

    printf("Enter start: ");
    scanf("%d", &start);
    printf("Enter end: ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++) {
        // check if prime; iterate from 1 to n and check all the factors.
        int num_factors = 0;
        for (int j = 1; j<= i; j++) {
            if (i % j == 0) {
                num_factors++;
            }
        }

        // if only two factors (1 and n), it's prime, and output it
        if (num_factors == 2) {
            printf("%d ", i);
        }
    }

    printf("\n");
}