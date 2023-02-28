#include "main.h"
/**
 * _strlen- returning the lengt of the string
 * @s: pointer
 * Return: int
 */
int _strlen(char *s)
{
	int i;
	int count= 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
			count++;
	}
	return (count);
}

