#include <stdio.h>

// perfect number checker

int main(void) {
    int user_input = 0;
    
    printf("Please enter a positive integer: ");
    scanf("%d", &user_input);

    int sum_of_factors = 0;

    for (int i = 0; i < user_input; i++) {
        if (user_input % i == 0) {
            printf("%d is a factor of %d\n", i, user_input);
            sum_of_factors += i;
        }
    }
    printf("The sum of %d's factors is %d.\n", user_input, sum_of_factors);

    if (sum_of_factors == user_input) {
        printf("%d is a perfect number!\n", user_input);
    } else {
        printf("%d is not a perfect number.\n", user_input);
    }
}