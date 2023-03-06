#include "main.h"
/**
 * _memcpy- copying from memory area
 * @dest: memory area 1
 * @src: memory area 2
 * @n: number of bytes
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		src[i]++;
	}

		dest[i] = src[i];
		return (dest);
}
