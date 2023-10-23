#include "lists.h"

/**
 * pop_listint -A function that delete the head node of a list
 * @head: Pointer to the first element in the list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int Number;

	if (!head || !*head)
		return (0);

	Number = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (Number);
}
