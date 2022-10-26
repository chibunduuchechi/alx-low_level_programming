#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - main entry point
 * Description: returns the nth node of a listint_t linked list
 * @index: index of the node to return
 * @head: pointer to the first node in the list
 * Return: pointer to the indexed node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m;

	if (head == NULL)
		return (NULL);
	for (m = 0; m < index; m++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
