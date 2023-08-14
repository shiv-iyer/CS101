#include <stdio.h>

// input number of males and number of females in a class, display percentage of females to 1 decimal place

int main(void) {
    int numMales, numFemales = 0;
    printf("Good morning! Please enter the number of males and number of females in your class, separated by a space\n");
    scanf("%d %d", &numMales, &numFemales);
    int total = numMales + numFemales;

    // multiply by 100 to get a percentage
    double femaleRatio = ((double) numFemales / total) * 100;
    // %.xlf cuts it to x number of decimal places

    printf("\nThe percentage of females is %.1lf%%", femaleRatio);
}