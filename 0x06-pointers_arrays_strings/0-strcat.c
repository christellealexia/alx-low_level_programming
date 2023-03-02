#include "main.h"
/**
 * _strcat- concatinating two strings
 * @dest: destination
 * @src: source
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;
	while (*p != '\0')
	{
	p++;
	}
	while (*src != '\0') {
	*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
