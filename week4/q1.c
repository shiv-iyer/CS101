#include <stdio.h>

int main(void) {
    long num = 0;

    printf("Please enter a number, n, where 0 < n < 2147483647\n");
    scanf("%ld", &num);

    long sum = 0;

    for (int i = 1; i <= num; i++) {
        if (i % 7 == 0) {
            sum += i;
        }
    }
    printf("%ld\n", sum);
}