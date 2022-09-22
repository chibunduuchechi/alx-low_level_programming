#include "main.h"
#include <stdio.h>

/**
 * print_line - main entry point
 *
 * Description: printing a straight line
 *
 * @n: number of times to print _ character
 */

void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
