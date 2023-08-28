#include <stdio.h>

// smallest and highest integers of 5 inputs

int main(void) {
    int highest = -99999;
    int smallest = 99999;
    int user_input;
    
    for (int i = 0; i < 5; i++) {
        printf("Enter n: ");
        scanf("%d", &user_input);
        if (user_input > highest) {
            highest = user_input;
        }
        if (user_input < smallest) {
            smallest = user_input;
        }

        printf("Largest so far == %d. Smallest so far == %d.\n", highest, smallest);
    }
}