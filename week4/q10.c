#include <stdio.h>

// Twelve days of Christmas...

int main(void) {

    int day = 0;
    // start from day 1
    for (day = 1; day <= 12; day++) {
        switch (day) {
            case 1:
                printf("On the first day of Christmas, my true love sent to me\n");
                break;
            case 2:
                printf("On the second day of Christmas, my true love sent to me\n");
                break;
            case 3:
                printf("On the third day of Christmas, my true love sent to me\n");
                break;
            case 4:
                printf("On the fourth day of Christmas, my true love sent to me\n");
                break;
            case 5:
                printf("On the fifth day of Christmas, my true love sent to me\n");
                break;
            case 6:
                printf("On the sixth day of Christmas, my true love sent to me\n");
                break;
            case 7:
                printf("On the seventh day of Christmas, my true love sent to me\n");
                break;
            case 8:
                printf("On the eighth day of Christmas, my true love sent to me\n");
                break;
            case 9:
                printf("On the ninth day of Christmas, my true love sent to me\n");
                break;
            case 10:
                printf("On the tenth day of Christmas, my true love sent to me\n");
                break;
            case 11:
                printf("On the eleventh day of Christmas, my true love sent to me\n");
                break;
            case 12:
                printf("On the twelfth day of Christmas, my true love sent to me\n");
                break;
            }

        // fall-through switch: cascade down each previous line to reuse them.
        switch (day) {
            case 12:
                printf("Twelve drummers drumming,\n");
            case 11:
                printf("Eleven pipers piping,\n");
            case 10:
                printf("Ten lords a-leaping,\n");
            case 9:
                printf("Nine ladies dancing,\n");
            case 8:
                printf("Eight maids a-milking,\n");
            case 7:
                printf("Seven swans a-swimming,\n");
            case 6:
                printf("Six geese a-laying,\n");
            case 5:
                printf("Five gold rings,\n");
            case 4:
                printf("Four calling birds,\n");
            case 3:
                printf("Three French hens,\n");
            case 2:
                printf("Two turtle doves,\n");
            case 1:
                printf("A partridge in a pear tree\n");
                break;
        }

        // extra space just for formatting sake
        printf("\n");
    }
}