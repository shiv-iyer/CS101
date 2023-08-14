#include <stdio.h>

// formula: (mAh/1000) * V = Wh

int main(void){
    int capacity = 0;
    int voltage = 0;

    printf("Please enter the capacity (mAh) and voltage (V) of your powerbank! Separated by spaces ofc\n");
    scanf("%d %d", &capacity, &voltage);
    int ratedPower = (capacity / 1000) * voltage;
    printf("The rated power of your powerbank is %d", ratedPower);
}