#include "lists.h"
#include <stdio.h>
/**
 * print_listint - main entry point
 * Description: points all the elements of a listint_t list
 * @h: pointer to the hand of the list_t list
 * Return: Number of nodes in the lists_t list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}

