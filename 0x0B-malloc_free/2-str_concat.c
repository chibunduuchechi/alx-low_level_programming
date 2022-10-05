#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - entry point
 * Descrption:count array
 * @s: array of elements
 * Return: m
 */
int _strlen(char *s)
{
	unsigned int m;

	m = 0;
	while (s[m] != '\0')
	{
		m++;
	}
	return (m);
}

/**
 * str_concat - main entry point
 * Description: concatenates two strings
 * @s1: array 1
 * @s2: array 2
 * Retun: Always a dynamic array
 */

char *str_concat(char *s1, char *s2)
{
	char *cat;
	unsigned int m, n, size;

	if (s1 == NULL) /* if s1 is an empty array*/
		s1 = "";
	if (s2 == NULL) /** if s2 is an empty array*/
		s2 = "";
	size = (_strlen(s1) + _strlen(s2) + 1);

	cat = (char *) malloc(size * sizeof(char));

	if (cat == 0)
	{
		return (NULL);
	}
	for (m = 0; *(s1 + m) != '\0'; m++)
		*(cat + m) = *(s1 + m);
	for (n = 0; *(s2 + n) != '\0'; n++)
	{
		*(cat + m) = *(s2 + n);
		m++;
	}
	return (cat);
}
