#include "main.h"
/**
 * factorial- returns a factorial of a number
 * @n: integer to be used
 * Return: Always 0
 */
int factorial(int n)
{
	if (n > 0)
	{
	return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
	return (-1);
	}
}
