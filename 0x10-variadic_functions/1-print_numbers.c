#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers- print numbers
 * @n: 2nd argument
 * @separator: string to be printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
		printf("%d",va_arg(ap,int));
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int));
			printf("%s", separator);
		}
	}
	printf("%d\n", va_arg(ap, int));
		va_end(ap);
}
