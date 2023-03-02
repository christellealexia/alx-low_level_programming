#include "main.h"
/**
 * string_toupper- changing letters of a string to uppercase
 * @ str: string
 *
 * Return: string
 */
char *string_toupper(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
	p++;
	}
	if (str[a] >= 'a' && str[a] <= 'z')
	{
		*p = *p- 32;
	}
	
	return (str);
	}

	
