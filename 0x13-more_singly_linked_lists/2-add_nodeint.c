#include "lists.h"
/**
*add_nodeint- function to add a new node at the beginning
*@n: argument used
*@head: pointer used
*Return: address of the new element or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}

