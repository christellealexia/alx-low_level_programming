#include "lists.h"
/**
 * print_listint_safe- function to print a linked list
 * @head: pointer used
 * Return;  number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *first_ptr = head;
	const listint_t *second_ptr = head;

	while (first_ptr != NULL && second_ptr != NULL && second_ptr->next != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)first_ptr, second_ptr->n);
		first_ptr = first_ptr->next;
		second_ptr = second_ptr->next->next;

		if (first_ptr == second_ptr)
		{
			printf("-> [%p] %d\n", (void *)first_ptr, first_ptr->n);
			printf("Error: List contains a loop\n");
			exit(98);
		}
	}

	while (first_ptr != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)first_ptr, first_ptr->n);
		first_ptr = first_ptr->next;
	}

	return (count);
}

