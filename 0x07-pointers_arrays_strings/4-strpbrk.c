#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Searches a string for set of bytes
 * @s: The string to be searched
 * @accept: The set of bytes to be searched for
 * Return: a pointer to the matched byte if a set is matced
 * return Null if no et is matched
 */

char *_strpbrk(char *s, char *accept)
{
	int c;

	while (*s)
	{
		for (c = 0; accept[c]; c++)
		{
			if (*s == accept[c])
				return (s);
		}
		s++;
	}
	return ('\0');
}
