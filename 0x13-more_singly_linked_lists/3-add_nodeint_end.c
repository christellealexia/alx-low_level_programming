#include "lists.h"
/**
 * add_nodeint_end- function to add node at the end
 * @head: pointer used
 * @n: argument used
 * Return: pointer to the adress of the new element t
 * orNULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	temp = *head;
	ptr->n = n;
	ptr->next = NULL;
	if (temp == NULL)
	{
		*head = ptr;
	}
	else
	{
	while (temp->next != NULL)
	{
	temp = temp->next;
	}
	temp->next = ptr;
	}
	return (*head);
}
