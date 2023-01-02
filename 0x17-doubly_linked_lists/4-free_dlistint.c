#include "lists.h"

/**
 * free_dlistint - main entry point
 * Description: Frees a list
 * @head: Pointer to the list
**/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *tmp;

	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
}
