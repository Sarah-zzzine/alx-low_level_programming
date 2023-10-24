#include "lists.h"

/**
 * free_listint_safe -a function that frees a list
 * @h: Pointer to the first node in the list
 *
 * Return: Number of elements in the free list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lenght = 0;
	int dif;
	listint_t *tmp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			lenght++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lenght++;
			break;
		}
	}

	*h = NULL;

	return (lenght);
}
