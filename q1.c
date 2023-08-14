#include <stdio.h>

// q1
int sumOfThreeInts(int a, int b, int c) {
    return a + b + c;
} 

int main(void) {
    int num1, num2, num3 = 0;
    printf("Please enter three numbers, separated by spaces! \n");
    scanf("%d %d %d", &num1, &num2, &num3);
    // if you printf("%d", num1, num2) it won't work, you need to match the %d to each amount of numbers being output
    // printf("%d %d %d", num1, num2, num3);
    printf("\nYour sum is: %d", sumOfThreeInts(num1, num2, num3));
}