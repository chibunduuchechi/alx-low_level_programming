#include "main.h"
#include <stdio.h>

/**
 * rev_string - maim entry point
 *
 * Description: function reversing a string
 *
 * @s: peremeter of the string
 *
 * Return: 0
 */

void rev_string(char *s)
{
	int a, b;
	char ch;

	for (a = 0; s[a] != '\0'; ++a)
		;
	for (b = 0; b < a / 2; ++b)
	{
		ch = s[b];
		s[b] = s[a - 1 - b];
		s[a - 1 - b] = ch;
	}
}
