#include "main.h"
/**
 * string_toupper- changing letters of a string to uppercase
 * @ str: string
 *
 * Return: string
 */
char *string_toupper(char *str)
{
	*ptr = str;

	for (a = 0; a< str; a++)
	{

	if (str[a] >= 'a' && str[a] <= 'z')
	{
		str[a] = str[a] - 32;
	}
	}
	return (str);
	}

	
