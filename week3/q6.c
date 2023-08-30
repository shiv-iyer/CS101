#include <math.h>
#include <stdio.h>

// a single for loop for each segment to do some crazy stuff
// multiple for loops allowed, but no nested for loops or if statements

void convert_num_to_letters(int number) {
    switch (number) {
    case 1:
        printf("Aa");
        break;
    case 2:
        printf("Bb");
        break;
    case 3:
        printf("Cc");
        break;
    case 4:
        printf("Dd");
        break;
    case 5:
        printf("Ee");
        break;
    // so on and so forth up to 26...
    default:
        printf("Work in progress...");
        break;
    }
}

int main(void) {
    int user_input = 0;

    printf("Enter n: ");
    scanf("%d", &user_input);

    // fun pattern
    for (int i = user_input; i > 0; i--) {
        printf("--\\|/-");
    }

    printf("\n");

    // squares of each number
    for (int i = user_input; i > 0; i--) {
        printf("%.0f ", pow((double)i, 2));
    }

    printf("\n");

    // number and the next two nums in the sequence
    for (int i = 1; i <= user_input; i++) {
        printf("%d%d%d ", i, i + 1, i + 2);
    }

    printf("\n");

    // letters...
    for (int i = 1; i <= user_input; i++) {
        convert_num_to_letters(i);
    }

    printf("\n");

    // individual numbers and sum
    int sum = 0;
    for (int i = user_input; i > 0; i--) {
        printf("%d ", i);
        sum += i;
    }

    printf("(sum: %d)\n", sum);

    // half pyramid of numbers! how is it possible without a nested for loop...
    double total = 0;
    for (int i = 1; i <= user_input; i++) {
        total += pow(10.0, i-1) * i;
        printf("%.0f\n", total);
    }
}