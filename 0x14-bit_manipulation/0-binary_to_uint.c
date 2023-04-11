#include "main.h"
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
/**
 * binary_to_uint- function to convert binary to a number
 * @b: string used
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	size_t len = strlen(b);
	unsigned int mult = 1;
	size_t i = 0;

	for (; i < len; i++)
	{
		if (b[len - i - 1] == '1')
		{
			number += mult;
		}
		else if (b[len - i - 1] != '1' && b[len - i - 1] != '0' && !b)
		{
			return (0);
		}
		mult *= 2;
	}
	return (number);
}
