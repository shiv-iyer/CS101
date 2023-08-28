#include <stdio.h>

int main(void){
    int side_a = 0;
    int side_b = 0;
    int side_c = 0;

    printf("This program will prompt you to input three sides of a triangle.\n");
    printf("Please input side a:\n");
    scanf("%d", &side_a);

    printf("Please input side b:\n");
    scanf("%d", &side_b);

    printf("Please input side c:\n");
    scanf("%d", &side_c);

    // only valid if the sum of any two sides is greater than the third side
    if ((side_a + side_b > side_c) && (side_a + side_c > side_b) && (side_b + side_c > side_a)){
        printf("It is a valid triangle.\n");
    } else {
        printf("It is not a valid triangle.\n");
    }
}