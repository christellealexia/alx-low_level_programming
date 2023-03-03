#include "main.h"
/**
 * print_number- printing a number
 * @n: argument used
 * Return:int
 */
void print_number(int n)
{
	int rev_num = 0;


	if (n < 0)
	{
	putchar('-');
	n = -n; 
	}
	if (n == 0)
	{
	putchar('0'); 
	}
	else
	{
	while (n > 0)
	{
	int digit = n % 10;
	rev_num = rev_num * 10 + digit;
	n /= 10;
	}
	while (rev_num > 0)
	{
	int digit = rev_num % 10;
	putchar(digit + '0'); 
	rev_num /= 10;
	}
	}
}

