#include <stdio.h>

void calculate_commission_and_pay(double sales) {
    int commission_rate = 0;
    if (sales < 10000) {
        commission_rate = 5;
    } else if (sales < 15000) {
        commission_rate = 10;
    } else if (sales < 18000) {
        commission_rate = 15;
    } else {
        commission_rate = 18;
    }

    double monthly_pay = sales * (commission_rate * 0.01) + 2000;

    // %.2f prints the value with 2 decimal places precision
    printf("Commission rate for the monthly sale of $%.2f is %d%%\n", sales, commission_rate);
    printf("The monthly pay for the salesperson is $%.2f\n", monthly_pay);
}

int main(void) {
    double monthly_sales = 0;

    printf("Hello, salesperson! Please input your monthly sales amount ($):\n");
    scanf("%lf", &monthly_sales);

    calculate_commission_and_pay(monthly_sales);
}