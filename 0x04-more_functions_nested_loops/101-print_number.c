#include <stdio.h>

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
		putchar('-');
		number = -number;
	}
	number /= 10;

	if (number != 0)
	print_number(number);

	_putchar((unsigned int) n % 10 + '0');
}
