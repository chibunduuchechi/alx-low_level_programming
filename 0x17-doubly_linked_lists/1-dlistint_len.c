#include "lists.h"

/**
 * dlistint_len - main entry
 * Description: Prints all the elements of the list
 * @h: Pointer to the list
 * Return: Number of counted nodes
**/
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
