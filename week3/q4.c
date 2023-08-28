#include <stdio.h>

// factorial calculator

int main(void) {
    int user_input = 0;

    printf("Please enter a number: ");
    scanf("%d", &user_input);

    if (user_input < 0) {
        printf("Invalid input.\n");
    } else {
        // can declare sum as 1 first because the first input will multiply by 1
        int sum = 1;
        for (int i = user_input; i > 0; i--) {
            // sum *= i is the same as sum = sum * i
            sum *= i;
        }
        printf("%d! = %d\n", user_input, sum);
    }
}