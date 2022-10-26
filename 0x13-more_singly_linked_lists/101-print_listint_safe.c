#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _r - main entry point
 * Description: reallocates memory for an array of
 * pointers to the nodes in a linked list
 * @size: size of the new list (always one more than the old list)
 * @list: the old list to append
 * @new: new node to add to the list
 * Return: pointer to the new list
 */

const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t m;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (m = 0; m < size - 1; m++)
		newlist[m] = list[m];
	newlist[m] = new;
	free(list);
	return (newlist);
}
