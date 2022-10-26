#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - main entry point
 * @head: double pointer to the first node in the list
 * @n: value for new node
 * @idx: index of the node to insert
 * Return: pointer to the indexed node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int m;
	listint_t *current, *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		current = *head;
		for (m = 0; m < idx - 1 && current != NULL; m++)
		{
			current = current->next;
		}
		if (current == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
