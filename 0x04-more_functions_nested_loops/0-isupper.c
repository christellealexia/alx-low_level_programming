#include "main.h"
/**
 * _isupper- checking for uppercase
 * @c: integer to check
 * Return: int
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
