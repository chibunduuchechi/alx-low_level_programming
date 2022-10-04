#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - main entry point
 * Description: returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given
 * as parameter
 * @str: the string to be copied
 * Return: NULL when there is error
 */
char *_strdup(char *str)
{
	char *copy;
	int index, len;

	if (str == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		len++;
	copy = malloc(sizeof(char) * (len + 1));

	if (copy == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
	{
		copy[index] = str[index];
	}
	copy[len] = '\0';

	return (copy);
}
