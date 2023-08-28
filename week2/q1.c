#include <stdio.h>

int main(void){
    int n1 = 0;
    int n2 = 0;
    printf("Hi, this program will prompt you to input two integers. Please enter them, separated by a space:\n");
    scanf("%d %d", &n1, &n2);

    // check if n1 is a factor of n2
    if (n2 % n1 == 0){
        printf("%d is a factor of %d", n1, n2);
    } else {
        printf("%d is not a factor of %d", n1, n2);
    }
}