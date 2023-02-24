#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 1, b = 2, c, sum = 2; /* start with 1 and 2 and include 2 in the sum */

	while (b <= 4000000)
	{
	c = a + b; /* compute the next term in the sequence */
		if (c % 2 == 0)
	{
		sum += c; /* add the even-valued term to the sum */
	}
	a = b; /* shift the values down the sequence */
	b = c;
	}
