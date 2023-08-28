#include <stdio.h>
#include <math.h>

double calculateBMI(double weight, double height){
    return weight / (pow(height, 2));
}

int main(void){
    double weight = 0;
    double height = 0;
    printf("Please enter your weight (kg) and height (m):\n");
    scanf("%lf %lf", &weight, &height);

    double bmi = calculateBMI(weight, height);
    printf("Your BMI is %lf\n", calculateBMI(weight, height));

    // can't use switch because it has to have an integral type: cannot use range values in case statements
    // no need for bmi >= 18.5, >= 25 in the subsequent if statements because it's already covered from the previous ifs
    if (bmi < 18.5) {
        printf("You are considered underweight.\n");
    } else if (bmi < 25) {
        printf("You are considered normal.\n");
    } else if (bmi < 30) {
        printf("You are considered overweight.\n");
    } else if (bmi >= 30) {
        printf("You are considered obese.\n");
    } else {
        printf("I'm not really sure what you are considered... invalid input?\n");
    }
}