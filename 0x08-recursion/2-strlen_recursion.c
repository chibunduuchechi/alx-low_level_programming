#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - main entry point
 * Description: string length function
 * @s: input
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
