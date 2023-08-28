#include <stdio.h>

double premium_calculator(char gender, int age) {
    if (gender == 'M' || gender == 'm') {
        if (age < 25) {
            return 20.50;
        } else if (age < 30) {
            return 30.40;
        } else if (age < 65) {
            return 60.70;
        } else {
            return 70.70;
        }
    } else if (gender == 'F' || gender == 'f') {
        if (age < 25) {
            return 30.60;
        } else if (age < 30) {
            return 50.70;
        } else if (age < 65) {
            return 99.80;
        } else {
            return 120.30;
        }
    } else {
        printf("Invalid input.\n");
        return 0;
    }
}

int main(void) {
    char gender = 'a';
    int age = 0;

    // user inputs
    printf("Enter your gender (M or F): ");
    scanf("%c", &gender);
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Your premium is $%.2f\n", premium_calculator(gender, age));
}