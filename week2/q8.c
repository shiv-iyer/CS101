#include <stdio.h>

int main(void) {
    int month = 0;
    int days = 0;

    printf("Please enter a month, denoted by a number (1: January, 12: December)!\n");
    scanf("%d", &month);

    // only allow inputs between 1-12
    while (month < 1 || month > 12) {
        printf("Please only enter a number between 1 and 12!\n");
        scanf("%d", &month);
    }

    switch (month) {
        case 2:
            days = 28;
            break;
        // Fallthrough for months with 31 days
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days = 31;
            break;
        default:
            days = 30;
            break;
    }

    printf("There are %d days in this month.\n", days);
}