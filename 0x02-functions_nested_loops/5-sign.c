#include "main.h"
/**
 *print_sign- printing sign of numbers
 *@n: integer n to check
 *Return: int
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (+1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
