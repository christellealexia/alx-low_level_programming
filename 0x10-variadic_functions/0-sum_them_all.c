#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all- adding parameters
 * @n: first argument
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	 unsigned int i, sum = 0;

	va_start (ap, n);

	
	for (i = 0; i < n; i++)
		sum += va_arg (ap, int);
	if (n == 0)
		return (0);
	va_end(ap);
	return (sum);
}

