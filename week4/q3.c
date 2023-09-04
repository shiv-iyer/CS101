#include <stdbool.h>
#include <stdio.h>

int main(void) {
    int n1 = 1;
    int n2 = 1;
    bool condition_fulfilled = false;

    while (!condition_fulfilled) {
        printf("Enter n1 > ");
        scanf("%d", &n1);
        printf("Enter n2 > ");
        scanf("%d", &n2);
        if ((n1 + n2) % 3 == 0) {
            condition_fulfilled = true;
        } else {
            printf("Invalid!\n");
        }
    }

    int starting_point = 0;
    int ending_point = 0;

    if (n1 == n2) {
        printf("%d\n", n1);
    } else {
        // ternary operator to initialize the startng and ending points of the loop based on size
        starting_point = n1 > n2 ? n2 : n1;
        ending_point = n1 > n2 ? n1 : n2;

        // loop to iterate through the numbers and print.
        for (int i = starting_point; i <= ending_point; i++) {
            printf("%d ", i);
        }
    }
    printf("\n");
}