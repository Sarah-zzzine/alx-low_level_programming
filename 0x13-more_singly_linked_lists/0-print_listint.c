#include "lists.h"

/**
 * print_listint -A function that prints all the elements of a linked list
 * @h: Elements of the list to be printed
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t Number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		Number++;
		h = h->next;
	}

	return (Number);
}
