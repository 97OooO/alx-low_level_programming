#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * in a listint_t linked list
 * @head: a pointer to the first node of the list
 * @idx: The index of the list where the new node should be added
 * (starting at 0).
 * @n: The value to be stored in the new node.
 *
 * Return: the adress of the new node, or NULL if it failled.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp = *head;
	unsigned int i;

	if (head == NULL && idx > 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (temp == NULL || temp->next == NULL)
		{
			free(new_node);
			return (NULL);
		}
		temp = temp->next;
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
