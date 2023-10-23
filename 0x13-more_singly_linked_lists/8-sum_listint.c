#include "lists.h"

/**
 * sum_listint -A function that calculates the summution
 * of all the data in a listint_t list
 * @head: First node in the list
 *
 * Return: result of the sum
 */
int sum_listint(listint_t *head)
{
	int somme = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		somme += tmp->n;
		tmp = tmp->next;
	}

	return (somme);
}
