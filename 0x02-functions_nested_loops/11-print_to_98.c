#include "main.h"
#include<stdio.h>
/**
 *print_to_98- print natural number to 98
 *@n: integer n to be used
 *Return: int
 */
void print_to_98(int n)
{
	if (n > 98)
	{
	printf ("n should be less than or equal to 98\n");
	
	}
	int i;
	for ( i = n; i <= 98; n++)
	{
	printf("%d", i);
	}
	printf("\n");
}
int main(void)
{
	int n=1;
	print_to_98(n);
	return 0;
}
