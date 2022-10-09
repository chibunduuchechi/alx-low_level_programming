#include "main.h"

/**
 * _strncpy - main entry point
 * Description: copying at most an inputed number
 * of byte from stting src into dest
 * @src: The source string
 * @dest: The buffer storing the string copy
 * @n: The maximum number of bytes to copied from src
 * Return: A pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
