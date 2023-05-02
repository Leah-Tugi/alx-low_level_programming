#include "lists.h"

/**
 * find_listint_loop - finds a listint_t list safely
 * @head: A pointer to a pointer to the head of the list
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL || head->next == NULL)
		return (NULL);

	slow = head->next;
	fast = head->next->next;

	while (fast && fast->next)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);

		}
		slow = slow->next;
		fast = fast->next->next;
	}
	return (NULL);
}
