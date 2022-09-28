#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with constant byte
 * @s: pointer to the conatant
 * @b: constant
 * @n: maximum byte to use
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; n > 0; c++, n--)
	{
		s[c] = b;
	}
	return (s);
}
