#include "main.h"
#include <stdlib.h>

/**
 * _calloc - main entry point
 * Description: Allocates memory for an array of a certain
 * number of elements each of an inputted byte size
 * @size: The byte size of each array element
 * @nmemb: The number of elements
 * Return: NULL if size = 0, nmemb = 0 or function fails
 * else apointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (mem);
}
