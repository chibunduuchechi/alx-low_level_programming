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
	unsigned int c = n;

	if (n < 0)
	{
		n *= -1;
		c = n;
		_putchar('-');
	}

	c /= 10;

	if (c != 0)
		print_number(c);
	_putchar((unsigned int) n % 10 + '0');
}
