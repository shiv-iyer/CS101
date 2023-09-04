#include <stdio.h>

char convert_num_to_letter(int number) {
    switch (number) {
    case 1:
        return('A');
        break;
    case 2:
        return('B');
        break;
    case 3:
        return('C');
        break;
    case 4:
        return('D');
        break;
    case 5:
        return('E');
        break;
    // so on and so forth up to 26...
    default:
        return('0');
        break;
    }
}

int main(void) {
    int user_input = 0;

    printf("Enter n: ");
    scanf("%d", &user_input);

    // first loop: rows and columns of stars
    for (int i = 0; i < user_input; i++) {
        for (int j = 0; j < user_input; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    // second loop: rows of stars, columns of descending length
    int inner_counter = user_input;
    for (int i = 0; i < user_input; i++) {
        for (int j = i; j < user_input; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    // third loop: digits from 1 to n, then 1 to n-1, etc.

    for (int i = 1; i <= user_input; i++) {
        for (int j = i; j <= user_input; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");

    // fourth loop: print letters but descending and with spacing

    for (int i = user_input; i > 0; i--) {
        for (int j = i; j > 1; j--) {
            printf(" ");
        }
        printf("%c\n", convert_num_to_letter(i));
    }

    printf("\n");

    // fifth and final loop: star patterns

    // top half first
    for (int i = 0; i < user_input / 2; i++) {
        // loop for initial number of spaces
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        printf("*");
        // loop for middle spaces
        for (int j = 0; j <= i; j++) {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }

    // not sure .... this is so tricky
}