#include <stdio.h>

int main(void){
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;

    printf("Hi, this program will prompt you to input three integers. Please enter them now, separated by spaces:\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    // declare smallest as a large number and highest as a small number so they are easily replaced
    int smallest = 99999;
    int largest = -99999;

    // I know it's not the best way of doing it but it should still work ... :')
    if (n1 < smallest){
        smallest = n1;
    }
    if (n1 > largest){
        largest = n1;
    }

    if (n2 < smallest){
        smallest = n2;
    }
    if (n2 > largest){
        largest = n2;
    }

    if (n3 < smallest){
        smallest = n3;
    }
    if (n3 > largest){
        largest = n3;
    }

    printf("Smallest is %d", smallest);
    printf("\nLargest is %d", largest);
}