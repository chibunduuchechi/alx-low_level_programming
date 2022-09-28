#include "main.h"
#include <stdio.h>

/**
 * _memcpy -copy's memory area
 * @dest: memory area
 * @src: source
 * @n: length of source
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		dest[c] = src[c];
	}
	return (dest);
}
