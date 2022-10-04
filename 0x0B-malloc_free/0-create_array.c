#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - main entry point
 * Description: array that prints a string
 * @size: number of element array
 * @c: char
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
	return (NULL);
	for (index = 0; index < size; index++)
	array[index] = c;

	return (array);
}
