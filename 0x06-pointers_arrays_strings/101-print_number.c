#include "main.h"
/**
 * print_number- printing a number
 * @n: argument used
 * Return:int
 */
void print_number(int n)
{
	int rev_num = 0;


	if (num < 0)
	{
	putchar('-');
	num = -num; 
	}
	if (num == 0)
	{
	putchar('0'); 
	}
	else
	{
	while (num > 0) {
	int digit = num % 10;
	rev_num = rev_num * 10 + digit;
	num /= 10;
	}
	while (rev_num > 0) {
	int digit = rev_num % 10;
	putchar(digit + '0'); 
	rev_num /= 10;
	}
}

