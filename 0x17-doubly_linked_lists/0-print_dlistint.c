#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: head of dlistint.
 *
 * Return: number o3f elements.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t elemNum = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		elemNum++;
	}
	return (elemNum);
}
