#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints an integer
 * @acion: function to be used
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != 0 && size != 0 && action != 0)
		while (i < size)
		{

	action(array[i]);
	i++;
		}
}
