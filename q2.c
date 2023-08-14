#include <stdio.h>

int main(void){
    int a, b = 0;
    printf("Please enter two numbers, separated by spaces! \n");
    scanf("%d %d", &a, &b);

    int sum = a + b;
    int product = a * b;
    // quotient means result obtained by dividing
    int quotient = a / b;

    printf("Here are your results! \n");
    printf("Sum: %d", sum);
    printf("\nProduct: %d", product);
    printf("\nQuotient: %d", quotient);
}