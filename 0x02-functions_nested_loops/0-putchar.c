#include "main.h"

/**
 * main -Entry point
 * Description: 'print _putchar'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char string[] = "_putchar";
	int i = 0;

	for (i = 0; string[i] != '\0'; i++)
	{
	_putchar (string[i]);
	}
	_putchar('\n');
	return (0);

}
