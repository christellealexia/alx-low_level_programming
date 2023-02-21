#include<stdio.h>

/**
 * main -ENtry point
 * Descrption: 'alphabets in lower case 10 times'
 * Return: void
 */
void print_alphabet_x10(void)
{
	char lowercase = 'a';

	int i, j;

	for (i = 0; i < 10; i++)
	{
	for (j = 0; j < 26; j++)
	{
	putchar (lowercase);
	putchar ('\n');
	lowercase++;
	}
	lowercase = 'a';
	}
}

