#include "main.h"

/**
 * _puts - main entry point
 *
 * Description: prints a string to stdout
 *
 * @str: string peremeter to be printed
 *
 * Return: 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}
