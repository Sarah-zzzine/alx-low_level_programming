#include "lists.h"

/**
 * get_nodeint_at_index -A func that returns the node at a
 * certain index in a linked list
 * @head: First node in the list
 * @index: The index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;
	listint_t *Tmp = head;

	while (Tmp && k < index)
	{
		Tmp = Tmp->next;
		k = k + 1;
	}

	return (Tmp ? Tmp : NULL);
}
