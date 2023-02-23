#include "main.h"
/**
 * _isupper- checking for uppercase
 * @c: integer to check
 * Return: int
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		_putchar(1);
	}
	else
	{
		_putchar(0);
	}
}
