#include "main.h"
/**
 * is_prime_number- returning a prime number
 * @n: integer to be used
 * Return: Always 0
 */
int is_prime_number(int n)
{
	if (n % 1 == 0 && n % 2 != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
