#include "lists.h"

/**
 * dlistint_len - Counts number of elements in linked dlistint_t list.
 * @h: head of the dlistint_t list.
 *
 * Return: number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elemNum = 0;

	while (h)
	{
		elemNum += 1;
		h = h->next;
	}
	return (elemNum);
}
