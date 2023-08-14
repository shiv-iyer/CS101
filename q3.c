#include <stdio.h>
#include <math.h>

// display the squares and cubes of numbers from 0 to 10, and use tab characters \t to separate the output into columns

int main(void){
    printf("N \t N^2 \t N^3");
    for (int i = 0; i <= 10; i++){ 
        // so all format specifiers have to be declared at the start.
        // the format specifier %g removes any trailing 0s, uses fixed floating point value https://www.javatpoint.com/c-format-specifier
        printf("\n %d\t %g\t %g", i, pow(i,2), pow(i,3));
    }
}