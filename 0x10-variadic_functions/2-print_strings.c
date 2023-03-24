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
	 

	for (i = 0; i < n; i++)
		
	{
		s = va_arg(ap,char *);

		if (s == NULL)
	{
		printf("nil");
	}
	else
	{
		printf("%s", s);
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	}
	printf("\n");
	va_end(ap);
	
}




 
