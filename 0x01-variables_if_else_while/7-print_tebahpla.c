#include <stdio.h>
/*betty doc goes here*/
/*
 * *
 *  main - Entry point
 *
 *  Return Always 0 (success)
 *
 */
int main() {
    char letter = 'z';

    while (letter >= 'a') {
        putchar(letter);
        letter--;
    }

    putchar('\n');

    return 0;
}

