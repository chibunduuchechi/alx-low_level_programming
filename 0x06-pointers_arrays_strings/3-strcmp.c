#include "main.h"
#include <stdio.h>

/**
 * _strcmp - main entry point
 * @s1: pointer to the first string to be compared
 * @s2: pointer to the second string to be compared
 * Return: If str1 < str2, the negative difference of
 * the first unmatched characters
 * If s1 > s2,the positive difference of the
 * first unmatched character
 * If s1 == s2, return 0
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
