#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @head: pointer to e head of the listint_t list.
 */
size_t free_listint_safe(listint_t **head)
{
	size_t size = 0;
	listint_t *current, *tmp;
	int diff;

	if (!head || !*head)
		return (size);
	current = *head;
	while (current)
	{
		diff = current - (current)->next;
		if (diff > 0)
		{
			tmp = current->next;
			free(current);
			current = tmp;
			size++;
		}
		else
		{
			free(current);
			current = NULL;
			size++;
			break;
		}
	}

	*head = NULL;
	return (size);
}
