#include "main.h"
/**
 * main -ENtry point
 * Descrption: 'alphabets in lower case 10 times'
 * Return: void
 */
void print_alphabet(void)
{
	char lowercase = 'a';

	int i,j;

	for (i = 0; i < 10; i++)
	{
	for (j = 0; j < 26; j++) 
	{
	_putchar (lowercase);
	_putchar ('\n');
	lowercase++;
	}
	lowercase = 'a';
	}
}
int main(void)
{
	print_alphabet();
	return (0);
}
