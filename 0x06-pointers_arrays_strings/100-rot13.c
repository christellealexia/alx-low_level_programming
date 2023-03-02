#include "main.h"
/**
 * rot13- encoding
 * @a: integer 1
 * @str: string
 * Return: string
 */
char *rot13(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
	if ((*ptr >= 'A' && *ptr <= 'M') || (*ptr >= 'a' && *ptr <= 'm'))
	{
            *ptr += 13;
        } 
	else if ((*ptr >= 'N' && *ptr <= 'Z') || (*ptr >= 'n' && *ptr <= 'z'))
	{
            *ptr -= 13;
        }
        ptr++;
	}
	return str;
}




