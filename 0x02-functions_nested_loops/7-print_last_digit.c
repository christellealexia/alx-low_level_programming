#include "main.h"
/**
 *print_last_digit- printing the last digit
 *Return: int
 */
int print_last_digit(int n)
{
	int lastDigit = n % 10;
	printf("The last digit of %d is %d\n", n, lastDigit);
}
