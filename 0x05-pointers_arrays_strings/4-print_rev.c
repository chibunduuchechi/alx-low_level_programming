#include "main.h"

/**
 * print_rev -main entry point
 *
 * Description: printing string in reverse
 * @s: the string
 * Return: 0
 */

void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	c--;
	while (c >= 0)
	{
		_putchar(s[c]);
		c--;
	}
	_putchar('\n');
}
