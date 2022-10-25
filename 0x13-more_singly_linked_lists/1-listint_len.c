#include "lists.h"

/**
 * listint_len - main entry point
 * Description: returns the number of elements in a linked listint_t list
 * @h: pointer to the linked list
 * Return: number of elements in a linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t counts = 0;

	while (h != NULL)
	{
		counts++;
		h = h->next;
	}
	return (counts);
}
