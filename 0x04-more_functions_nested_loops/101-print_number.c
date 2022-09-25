#include <stdio.h>
#include "main.h"

/**
 * print_number - main entry point
 *
 * Description: prints an integer
 *
 * @n: the integer to be printed
 */

void print_number(int n)
{
	unsigned int number = n;

	if (n < 0)
	{
		_putchar('-');
		number = -number;
	}
	if (0 < (number / 10))
		print_number(number / 10);

	_putchar(48 + (number % 10));
}
