#include <stdio.h>

// Singapore coin calculator
void calculate_coin_values(float amount) {
    // test for $1 first
    int num_onedollar = amount * 1;
    amount -= num_onedollar;
    printf("Number of $1 coins: %d\n", num_onedollar);
    printf("Remaining amount: $%lf\n", amount);

    // I'm not really sure how to continue from here... extracting the 50c, 20c values etc. Was stuck for quite a while...
    
}

int main(void) {
    float amount = 0;

    printf("Enter an amount that represents a dollar/cent value in SGD: ");
    scanf("%f", &amount);

    calculate_coin_values(amount);
}