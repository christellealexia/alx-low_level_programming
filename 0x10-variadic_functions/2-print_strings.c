#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings- print strings
 * @separator:1st arg
 * @n:2nd arg
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *s;

	va_start(ap, n);
	 

	for (i = 0; i < n-1; i++)
		
	{
		s = va_arg(ap,char *);

		if (s == NULL)
	{
		printf("nil");
	}
	else if (separator != NULL)
	{
		printf("%s", s);
		printf("%s", separator);
	}
	}
	va_end(ap);
	printf("\n");
}




 
