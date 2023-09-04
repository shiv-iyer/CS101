#include <stdio.h>

int main(void) {
    int height_of_tree = 0;

    printf("Hello! Please enter the height of the Christmas tree, greater than 9: ");
    scanf("%d", &height_of_tree);

    if (height_of_tree < 10) {
        printf("Invalid height entered. Goodbye.");
    } else {
        for (int i = 0; i < height_of_tree; i++) {
            printf(" * ");
        }
    }
}