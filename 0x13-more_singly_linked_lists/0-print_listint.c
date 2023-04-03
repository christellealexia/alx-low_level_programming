#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_listint- function that prints all elements
 * @h: pointer used 
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	
	while (h != NULL)
	{
		count++;
		printf ("%d", h->n);
		h = h->next;
	}
	return (count);
}
