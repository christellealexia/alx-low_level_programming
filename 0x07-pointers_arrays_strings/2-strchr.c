#include "main.h"
/**
 * _strchr- locating a character in a string
 * @s: string
 * @c: character to be checked
 * Return: a pointer
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (c == s[i]) 
		
		return (s+i);
	}

	return (0);
}

