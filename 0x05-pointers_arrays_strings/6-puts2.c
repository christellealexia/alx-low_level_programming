#include "main.h"
/**
 * puts2 - prints some chars
 * @str: arg1
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i >= 0; i++)
	{
		if (str[i] == '\0')
			break;
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
