#include "main.h"
#include <stdio.h>

/**
 * _strcpy - main entry point
 * @dest: char type string
 * @src: char type string
 * Description: copies the string pointed to by pointer
 * src to the buffer pointed to by dest
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
