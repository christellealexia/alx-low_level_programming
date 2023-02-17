#include<stdio.h>
/* main headers go here*/
/*bety doc usage goes here*/
/**
 * main - Entry point
 *
 * Return Always 0 (success)
 */
int main() {
    char lowercase = 'a';
    char uppercase = 'A';

    // Print the lowercase alphabet
    while (lowercase <= 'z') {
        putchar(lowercase);
        lowercase++;
    }

    // Print the uppercase alphabet
    while (uppercase <= 'Z') {
        putchar(uppercase);
        uppercase++;
    }

    // Print a new line
    putchar('\n');

    return 0;
}
