#include "main.h"

/**
 * swap_int - swap 2 args/variables
 * @a: arg1
 * @b: arg2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;

}
