#include "main.h"
/**
 * _strlen - main entry point
 *
 * Description: checking the length of a string
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
