#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: int 
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0L;

	for ((s[i] == '-') || (s[i] == '+'))
	{
	sign = -1;
	i++;
	}
	else if (s[i] == '+')
	{
	i++;
	}

	while (s[i] != '\0')
	{
	if (s[i] >= '0' && s[i] <= '9')
	{
	result = result * 10 + (s[i] - '0');
	}
	else
	{
	break;
	}
	i++;
	}

	return (sign * result);
}



