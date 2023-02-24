#include "main.h"
/**
 * print_numbers- print numbers from 0 to 9
 * @ c: integer c to be used
 * Return: void
 */
void print_numbers(void)
{
	int c = '0';

	for (; c <= '9' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

