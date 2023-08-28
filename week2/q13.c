#include <stdio.h>

// Singapore progressive income tax rate calculator

int main(void) {
    double income = 0;
    double tax_payable = 0;

    printf("Enter your personal annual income: ");
    scanf("%lf", &income);

    if (income >= 20000 && income <= 30000){
        // 2% for the 20001 - 30000 range
        tax_payable = (income - 20000) * 0.02;
    } else if (income >= 30001 && income <= 40000) {
        // 3.5% for the 30001 - 40000 range
        tax_payable = (income - 30000) * 0.035 + 200;
    } else if (income >= 40001 && income <= 80000) {
        // 7% for the 40001 - 80000 range
        tax_payable = (income - 40000) * 0.07 + 550;
    } else if (income >= 80001 && income <= 120000) {
        // 11.5% for the 80001 - 120000 range
        tax_payable = (income - 80000) * 0.115 + 3350;
    } else if (income >= 120001 && income <= 160000) {
        // 15% for the 120001 - 160000 range
        tax_payable = (income - 120000) * 0.15 + 7950;
    } else if (income >= 160001 && income <= 200000) {
        // 18% for the 160001 - 200000 range
        tax_payable = (income - 160000) * 0.18 + 13950;
    } else if (income >= 200001) {
        // 20% for anything above 200000.
        tax_payable = (income - 200000) * 0.2 + 21150;
    }

    printf("Tax payable: $%.2f\n", tax_payable);
 }