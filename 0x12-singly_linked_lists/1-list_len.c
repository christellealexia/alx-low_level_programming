#include "lists.h"
#include <stdio.h>

/**
 * print_list - print elements of linkedlist
 * @h: linked list
 *
 *  * Return: number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	size_t count;

	while (h != NULL)
	{
		 h = h->next;
		count++;
	}
	return (count);
}
