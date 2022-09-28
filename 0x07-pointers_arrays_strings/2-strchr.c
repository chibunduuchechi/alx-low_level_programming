#include "main.h"
#include <stdio.h>

/**
 * _strchr - it locates a character in a string
 * @s: string to be searched
 * @c: character to be located
 * Return: a pointer to the fiest ocourence if c is found
 * Null if c is not found
 */

char *_strchr(char *s, char c)
{
	int m;

	for (m = 0; s[m] >= '\0'; m++)
	{
		if (s[m] == c)
			return (s + m);
	}
	return ('\0');
}
