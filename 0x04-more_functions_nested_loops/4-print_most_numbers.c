#include "main.h"
/**
 * print_most_numbers- printing numbers from 0 to 9 but skipping 2 and 4
 * @ a; a integer to be used
 * Return: void
 */
void print_most_numbers(void)
{
	int a;
	for (a = '0'; a <= '9'; a++)
	{
		if (a == '2' && a == '4')
		{
			break;
		}
		else
		{
		_putchar(a);
		}
		_putchar('\n');
	}
}

