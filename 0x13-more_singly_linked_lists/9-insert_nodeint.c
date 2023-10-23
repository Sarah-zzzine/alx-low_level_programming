#include "lists.h"

/**
 * insert_nodeint_at_index -A func that insert a new node in a list,
 * at a given position
 * @head: Pointer to the first node in the list
 * @idx: Index where the new node is added
 * @n: Data to insert in the new node
 *
 * Return: pointer to the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *new_node;
	listint_t *tmp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (j = 0; tmp && j < idx; j++)
	{
		if (j == idx - 1)
		{
			new_node->next = tmp->next;
			tmp->next = new_node;
			return (new_node);
		}
		else
			tmp = tmp->next;
	}

	return (NULL);
}
