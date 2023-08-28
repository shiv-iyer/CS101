#include <stdio.h>

int main(void) {
    int user_input;

    printf("Please input a positive integer (n)!\n");
    scanf("%d", &user_input);

    printf("Printing all the positive integers up to %d...\n", user_input);
    for (int i = 1; i < user_input; i++) {
        printf("%d,", i);
    }

    // print up to n-1 so that the final output, n, will not have a trailing comma
    printf("%d\n", user_input);
}