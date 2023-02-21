#include <stdio.h>

/**
 * main -Entry point
 * Description: 'if alphabet is lowecase'
 * Return: int
 */
int _islower(int c)
{
	if(islower(c))
	{
	putchar('1');
	putchar('\n');
	return (1);
	}
	else{
	putchar('0');
	putchar('\n');
	return (0);
	}
}
