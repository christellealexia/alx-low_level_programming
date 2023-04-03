#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len- function to add a new node at the beginning
 * @h: pointer that is used
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
	count++;
	h = h->next;
	}
	return (count);
}
