#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - main entry point
 * Description: deletes the node at index index of a listint_t linked list
 * @head: double pointer to the first node in the list
 * @index: index of the node to delete
 * Return: pointer to the indexed node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int m;
	listint_t *current, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	current = *head;
	for (m = 0; m < index - 1; m++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	next = current->next;
	current->next = next->next;
	free(next);
	return (1);
}
