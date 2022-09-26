#include "main.h"
#include <stdio.h>

/**
 * puts_half - main entry point
 *
 * Description: printing half of a string
 *
 * @str: the string
 * Return: 0
 */

void puts_half(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
		;
	c++;
	for (c /= 2; str[c] != '\0'; c++)
	{
		putchar(str[c]);
	}
	putchar('\n');
}
