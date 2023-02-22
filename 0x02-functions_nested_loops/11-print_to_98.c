#include "main.h"
#include<stdio.h>
/**
 *print_to_98- print natural number to 98
 *@n: integer n to be used
 *Return: int
 */
void print_to_98(int n)
{
	int i, j;

	
	if (n > 98)
	{
	for (j = n; j >= 98; j--)
	{
	printf("%d", j);
	
	}
	}
	else
	{
	for (i = n; i <= 98; i++)
	{
	printf("%d", i);
	}
	printf("\n");
	}
}
