#include "main.h"
/**
 * _isalpha- checking for a an alphabet
 * @c: integer c to check
 * Return: int
 */
int _isalpha(int c)
{
	
	if ((c == 65 && c <= 90) || (c >= 97 && c<= 122))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
