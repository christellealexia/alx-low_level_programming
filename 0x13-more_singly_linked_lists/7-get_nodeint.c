#include "lists.h"
/**
 *get_nodeint_at_index- function to return nth node of a linked list
 *@index: argument used
 *@head: pointer used
 *Return: number of nodes
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
