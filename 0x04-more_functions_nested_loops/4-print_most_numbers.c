#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - main entry point
 *
 * Description: printing 0 to 9 except 2 and 4
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int c = 48;

	for (c = 48; c <= 57; ++c)
	{
		if (c == 50 || c == 52)
			break;
			continue;
		_putchar(c + 48);
	}
	_putchar('\n');
}
