#include "lists.h"

/**
 * delete_nodeint_at_index -A function that deletes a node
 * in a linked list at a given index
 * @head: Pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *current = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (j < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		j++;
	}


	current = tmp->next;
	tmp->next = current->next;
	free(current);

	return (1);
}
