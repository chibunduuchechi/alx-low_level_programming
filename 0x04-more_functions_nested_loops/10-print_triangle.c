#include "main.h"
#include <stdio.h>

/**
 * print_triangle - main entry point
 *
 * Description: printing trianglr using #
 *
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int m;
	int n;
	int o;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 1; m <= size; m++)
		{
		for (n = size - m ; n > 0; n--)
		{
			_putchar(' ');
		}
		for (o = 0; o < m; o++)
		{
			_putchar('#');
		}
		_putchar('\n');
		}
	}
}
