#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely
 * @h: A pointer to the head node of the linked list
 *
 * Return: The size of the linked list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow, *fast, *tmp;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	slow = *h;
	fast = (*h)->next;

	while (fast != NULL && fast < slow)
	{
		tmp = fast->next;
		free(fast);
		count++;
		fast = tmp->next;
		slow = slow->next;
	}

	if (fast != NULL)
	{
		slow = *h;

		while (slow != fast)
		{
			tmp = fast->next;
			free(fast);
			count++;
			fast = tmp;
			slow = slow->next;
		}

		tmp = fast->next;
		free(fast);
		count++;
		fast = tmp;
		slow->next = NULL;
	}

	while (slow != NULL)
	{
		tmp = slow->next;
		free(slow);
		count++;
		slow = tmp;
	}

	*h = NULL;

	return (count);
}
