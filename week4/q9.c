#include <stdio.h>
#include <math.h>

// decimal to binary converter

int main(void) {
    int user_input = 0;
    int digit_count = 0;
    int binary_num = 0;

    printf("Enter num: ");
    scanf("%d", &user_input);

    // divide by 2 recursively, until the final result is 0. store the remainders
    while (user_input != 0) {
        int remainder = user_input % 2;
        user_input /= 2;
        // multiply the remainder by 10^n (where n is the current digit count) to match it to its digit place
        binary_num += remainder * pow(10, digit_count);
        digit_count++;
    }

    printf("%d\n", binary_num);
}