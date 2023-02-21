#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int printstring(void)
{
	char string = "_putchar";
	int i=o;
	for (i=o; string[i] != '\0'; i++)
	{
	_putchar (string[i]);
	}
	_putchar('\n');
	return 0;
}

