#include "main.h"
#include <stdio.h>

/**
 * print_numbers - main entry point
 *
 * Description: printing digits from 0 to 9
 *
 * Return: 0
 */

void print_numbers(void)
{
	int c;

	c = 48;

	do {
		_putchar(c);
		c++;
	} while (c >= 48 && c <= 57);
	_putchar('\n');
}
