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
	if (j != 98)
	{
	printf("%d, ", j);
	}
	else if(i == 98)
        {
        printf("%d", i);
	}
	else
	{
	for (i = n; i <= 98; i++)
	{
	if (i != 98)
	{
	printf("%d, ", i);
	}
	else
	{
	printf("%d", i);
	printf("\n");
	}
}
