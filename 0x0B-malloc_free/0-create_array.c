#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array- function to create array of characters
 * @c: argument to be used
 * @size: number of bytes
 * Return: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(sizeof(char) * size);
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	if (size == 0)
	{
		return (NULL);
	}
	else if (s == NULL)
	{
		return (NULL);
	}
	return (s);
}


