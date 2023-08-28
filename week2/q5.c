#include <stdio.h>

int main(void){
    char user_char = 'c';
    printf("Please input a character!\n");
    scanf("%c", &user_char);

    // can just compare to char values
    // 0 - 9
    if (user_char >= '0' && user_char <= '9'){
        printf("%c is a digit", user_char);
    // a - z
    } else if (user_char >= 'a' && user_char <= 'z') {
        printf("%c is a lowercase letter", user_char);
    // A - Z
    } else if (user_char >= 'A' && user_char <= 'Z') {
        printf("%c is an uppercase letter", user_char);
    // default case
    } else {
        printf("%c is a special character", user_char);
    }
}