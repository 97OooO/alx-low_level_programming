#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to head of list
 *
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}

	return (count);
}
