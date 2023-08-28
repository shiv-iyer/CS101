#include <stdio.h>
#include <math.h>

int main(void) {
    int initial_deposit = 0;
    int interest_rate = 0;
    int compound_frequency = 0;
    int num_years = 0;

    printf("Hello! Please enter all of the details for your savings account calculation...\n");
    printf("Initial Deposit (P): ");
    scanf("%d", &initial_deposit);
    printf("Annual Interest Rate (in %%, R): ");
    scanf("%d", &interest_rate);
    printf("Annual Compound Frequency (1 to 12, n): ");
    scanf("%d", &compound_frequency);
    printf("Number of years (t): ");
    scanf("%d", &num_years);

    // for the final calculation, convert interest rate to a decimal from a %
    double final_amount = initial_deposit * pow(1 + interest_rate * 0.01 / compound_frequency, compound_frequency * num_years);

    printf("Amount after %d years is %.2f", num_years, final_amount);
}