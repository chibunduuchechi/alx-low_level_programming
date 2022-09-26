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
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
