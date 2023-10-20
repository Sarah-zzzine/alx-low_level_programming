#include <stdlib.h>
#include "lists.h"

/**
 * free_list -A function that frees a linked list
 * @head: the list that is going to be free
 */
void free_list(list_t *head)
{
	list_t *actuelle = head;
	list_t *next;

	while (actuelle != NULL)
	{
		next = actuelle->next;
		free(actuelle->str);
		free(actuelle);
		actuelle = next;
	}
}
