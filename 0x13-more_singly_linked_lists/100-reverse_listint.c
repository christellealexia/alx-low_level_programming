#include "lists.h"
/**
 * reverse_listint- function to reverse a linked list
 * @head: pointer used
 * Return: pointer to the first node of the reverse list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *nextt;

	previous = NULL;
	nextt = NULL;
	while (*head != NULL)
	{
		nextt = (*head)->next;
		(*head)->next = previous;
		previous = (*head);
		*head = nextt;
	}
	*head = previous;
	return (*head);
}
