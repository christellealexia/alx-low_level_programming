#inclue <stdio.h>
#include "main.h"

/**
* largest_number - prints the largest of 3 integers
* @a: integer a
* @b: integer b
* @c: integer c
* Return: int
*/

int largest_number(int a, int b, int c)
{
	int largest;

	if ((a > b && b > c) || (a > c && c > b))
	{
	largest = a;
	}
	else if ((b > a && a > c) || (b > c && c > a))
	{
	largest = b;
	}
	else
	{
	largest = c;
	}

	return (largest);
}
