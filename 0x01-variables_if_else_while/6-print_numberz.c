#include <stdio.h>
/*header goes here*/
/*betty doc goes here*/
/*
 * *
 * main - Entry point
 *
 * Return Always 0 (success)
 */


int main() {
    int num = 0;

    while (num <= 9) {
        putchar(num + '0');
        num++;
    }

    putchar('\n');

    return 0;
}
