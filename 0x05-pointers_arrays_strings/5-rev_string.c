#include "main.h"

/**
 * rev_string - print reverse
 * @s: arg1
 * Return: void
 */

void rev_string(char *s)
{
	int i, count = 0;

	for (i = 0; i >= 0; i++)
	{
		if (s[i] == '\0')
			break;
		count++;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	
}
