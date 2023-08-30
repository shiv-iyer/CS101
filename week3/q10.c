#include <stdio.h>

int main(void) {
    int fibo_count = 0;
    printf("Enter n (for Fibonacci Sequence): ");
    scanf("%d", &fibo_count);

    // first two terms are always 0, 1
    int previous_previous_term = 0;
    int previous_term = 1;
    printf("%d %d ", previous_previous_term, previous_term);

    // start at n = 3.
    // calculate current term based on (n - 1) + (n - 2), then increment previous_previous term and store
    // current term as previous_term
    for (int i = 3; i <= fibo_count; i++) {
        int current_term = (previous_previous_term + previous_term);
        printf("%d ", current_term);
        previous_previous_term = previous_term;
        previous_term = current_term;
    }
    printf("\n");
}