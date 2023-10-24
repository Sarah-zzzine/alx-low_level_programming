#include "lists.h"

/**
 * find_listint_loop -a function finds the loop in a linked list
 * @head: The list to look for
 *
 * Return: The Address of the node where the loop starts or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *lent = head;
	listint_t *rapid = head;

	if (!head)
		return (NULL);

	while (lent && rapid && rapid->next)
	{
		rapid = rapid->next->next;
		lent = lent->next;
		if (rapid == lent)
		{
			lent = head;
			while (lent != rapid)
			{
				lent = lent->next;
				rapid = rapid->next;
			}
			return (rapid);
		}
	}

	return (NULL);
}
