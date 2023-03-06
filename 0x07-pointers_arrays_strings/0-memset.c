#include "main.h"
/**
 * _memeset- fills memory with a constant byte
 * @s: memory area to be filled
 * @b: consant byte to fill in the memory area
 * @n: number of bytes to be filled
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}

