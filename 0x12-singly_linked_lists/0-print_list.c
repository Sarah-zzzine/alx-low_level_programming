#include <stdio.h>
#include "lists.h"

/**
 * print_list -A function that prints all the elements of a linked list
 * @h: The pointer to the list_t the list that is going to be printed
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count = count + 1;
	}

	return (count);
}
