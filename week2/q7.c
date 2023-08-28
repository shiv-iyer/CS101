#include <stdio.h>

int main(void){
    int year = 0;
    printf("Please enter a year, and I will tell you if it's a leap year or not!\n");
    scanf("%d", &year);

    // conditions for a leap year: divisible by 400; divisible by 100; divisible by 4
    if (year % 400 == 0){
        printf("%d is a leap year.", year);
    } else if (year % 100 == 0) {
        printf("%d is a leap year.", year);
    } else if (year % 4 == 0) {
        printf("%d is a leap year.", year);
    } else {
        printf("%d is not a leap year.", year);
    }
}