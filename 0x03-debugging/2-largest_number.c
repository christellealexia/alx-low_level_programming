#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
	int x, y, z;
        int largest;

	x= 972;
	y = -98;
	z = 0;

	largest = largest_number(x, y, z);

	printf("%d is the largest number\n", largest);

	return (0);
}
