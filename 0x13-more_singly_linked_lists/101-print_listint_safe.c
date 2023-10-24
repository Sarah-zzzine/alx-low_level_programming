#include "lists.h"
/**
 * print_listint_safe -a function that prints a linked list with a loop safely.
 * @head: Pointer to the first node of the linked list
 * Return: New_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp_h = NULL;
	const listint_t *l_h = NULL;
	size_t count = 0;
	size_t new_h;

	temp_h = head;
	while (temp_h)
	{
		printf("[%p] %d\n", (void *)temp_h, temp_h->n);
		count++;
		temp_h = temp_h->next;
		l_h = head;
		new_h = 0;
		while (new_h < count)
		{
			if (temp_h == l_h)
			{
				printf("-> [%p] %d\n", (void *)temp_h, temp_h->n);
				return (count);
			}
			l_h = l_h->next;
			new_h++;
		}
		if (!head)
			exit(98);
	}
	return (count);
}
