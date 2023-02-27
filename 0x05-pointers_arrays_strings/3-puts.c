#include "main.h"

/**
 * _puts - reset pointer value to 98
 * @str: month in number format
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; i >= 0; i++)
	{
		if (str[i] == '\0')
			break;
		_putchar(str[i]);

	}
	_putchar('\n');
}
