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
	unsigned int i;

	(*action[i]);
}
