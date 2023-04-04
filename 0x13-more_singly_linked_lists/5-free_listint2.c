#include "lists.h"
/**
 * free_listint2- function to free the list
 * @head: pointer used
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while ((temp = *head) != NULL)
	{
		*head = (*head)->next;
		free(temp);
	}
}
