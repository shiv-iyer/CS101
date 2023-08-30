#include <stdio.h>

// frame pattern printer

int main(void) {
    int rows = 0;
    int columns = 0;

    printf("Please enter the number of rows: ");
    scanf("%d", &rows);
    printf("Please enter the number of columns: ");
    scanf("%d", &columns);

    // outer loop will be rows`
    for (int i = 0; i < rows; i++) {
        // inner loop will be columns
        for (int j = 0; j < columns; j++) {
            // if it's the top or bottom row, or the leftmost or rightmost column, print a *.
            // otherwise, print an empty space.
            if (i == 0 || i == rows - 1 || j == 0 || j == columns - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}