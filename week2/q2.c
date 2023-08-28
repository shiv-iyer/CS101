#include <stdio.h>

int main(void){
    int n1 = 0;
    printf("Hi, this program will prompt you to input one integer. Please enter it now:\n");
    scanf("%d", &n1);

    // check if n1 is odd or even
    if (n1 % 2 == 0){
        printf("%d is even", n1);
    } else {
        printf("%d is odd", n1);
    }
}