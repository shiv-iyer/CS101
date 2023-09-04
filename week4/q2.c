#include <stdio.h>
#include <stdbool.h>

int smallest = 99999;
int largest = -99999;

int main(void) {
    int user_input = 0;
    bool negative_number_input = false;

    while (!negative_number_input) {
        printf("Enter number: ");
        scanf("%d", &user_input);

        if (user_input < 0) {
            negative_number_input = true;
            printf("Bye!\n");
        } else {
            if (user_input > largest) {
                largest = user_input;
            }

            if (user_input < smallest) {
                smallest = user_input;
            }

            printf("Largest number so far == %d. Smallest number so far == %d.\n", largest, smallest);
        }
    }
}