#include "main.h"
#include <stdio.h>
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
		putchar(*str + 0);
		++str;
	}
	putchar('\n');
}
