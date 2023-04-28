#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Description: This function prints all the elements of a linked list
 * starting from the head node specified by @h. If the @str member of a
 * node is NULL, the function prints "(nil)" instead of the string.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[%d] (nil)\n", current->len);
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
		}

		count++;

		current = current->next;
	}

	return (count);
}
