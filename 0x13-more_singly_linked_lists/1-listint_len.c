#include "lists.h"

/**
 * listint_len -A function that returns the number
 * of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t Number = 0;

	while (h)
	{
		Number = Number + 1;
		h = h->next;
	}

	return (Number);
}
