#include <stdio.h>
/**
 * main- fibonacci numbers
 * @i: integer to be used
 * Return: Always 0
 */
int main() {
 	int i;
	
	int  fib[50] = {1, 2};

	for (i = 2; i < 50; i++) 
	{
	fib[i] = fib[i-1] + fib[i-2];
	}

	for (i = 0; i < 49; i++) 
	{
	printf("%d, ", fib[i]);
	}
	printf("%d\n", fib[49]);

	return 0;
}

