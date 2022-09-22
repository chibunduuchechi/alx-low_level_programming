#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - main entry point
 *
 * Description: prints a diagonal line
 *
 * @n: number of times to print \ character
 */

void print_diagonal(int n)
{
	int a, space, b;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (a = 0; a < n; a++)
		{
			b = a - 1;

			for (space = 0; space <= b; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
