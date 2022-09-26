#include "main.h"
#include <stdio.h>

/**
 * puts2 - maim entry point
 *
 * Description: prints other character of a string
 * starting with the first
 *
 * @str: string
 * Return: 0
 */

void puts2(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		if (c % 2 == 0)
			putchar(str[c]);
		c++;
	}
	putchar('\n');
}
