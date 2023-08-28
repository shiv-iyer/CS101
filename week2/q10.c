#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // code needed to generate different random numbers
    srand (time(0));

    int num1 = rand() % 10 + 1;
    int num2 = rand() % 10 + 1;   
    int num3 = rand() % 10 + 1;

    printf("Press <enter> key to start\n");
    // to pause and wait for user input
    // grab the "enter" character and discard it
    getchar();

    printf("*****************\n");
    printf("** %d ** %d ** %d\n", num1, num2, num3);
    printf("*****************\n");

    // if no numbers match, prompt user to try again
    if (num1 != num2 && num2 != num3 && num1 != num3) {
        printf("** Try again! **\n");
    // code for jackpot (3 of the same number) before 2 of a kind, because if 2 of a kind is first, it can supersede jackpot
    } else if (num1 == num2 && num2 == num3) {
        printf("** Jackpot! **\n");
    // if two numbers match, print 2 of a kind
    } else if (num1 == num2 || num2 == num3 || num1 == num3) {
        printf("** 2 of a kind **\n");
    } 
}