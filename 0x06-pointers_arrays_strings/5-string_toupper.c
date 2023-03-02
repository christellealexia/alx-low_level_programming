#include "main.h"
/**
 * string_toupper- changing letters of a string to uppercase
 * @ str: string
 *
 * Return: string
 */
char *string_toupper(char *str)
{
	char *ptr = str; 

	while (*ptr != '\0')
	{	
	if (*ptr >= 'a' && *ptr <= 'z')
	{
		*ptr = *ptr- 32;
	}
	}
	return (str);
	}

	
