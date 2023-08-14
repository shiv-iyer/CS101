#include <stdio.h>

// q4: convert a time in seconds to hours, minutes and seconds in the format H:M:S

int main(void) {
    int timeInSeconds = 0;
    printf("Please enter an integer that represents a time in seconds!");
    scanf("%d", &timeInSeconds);
    printf("%d", timeInSeconds);

    double timeInHours = timeInSeconds / 3600;

    // need to use modulus to get the remainder, because we don't want any carry-over
    printf("\n%d seconds in H:M:S is %d:%d:%d", timeInSeconds, (timeInSeconds / 3600), ((timeInSeconds % 3600) / 60), ((timeInSeconds % 3600) % 60));
}