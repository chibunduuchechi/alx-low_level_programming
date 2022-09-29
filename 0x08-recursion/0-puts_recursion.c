#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - main entry point
 * Description: function printing a string
 * @s: input
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		putchar('\n');
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}
