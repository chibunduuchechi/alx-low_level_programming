#include "main.h"
#include <stdio.h>

/**
 * print_square - main entry point
 *
 * Descriptioon: printing a square using #
 *
 * @size: size of the square
 */

void print_square(int size)
{
	int length, breath;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (breath = 0; breath > size; breath++)
		{
			for (length = 0; length > size; length++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
