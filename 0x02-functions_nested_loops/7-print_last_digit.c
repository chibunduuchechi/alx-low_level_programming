#include "main.h"
/**
 * print_last_digit - print the last digiti of num
 *
 * @n: the number that is taken and returns its last digit.
 *
 * Return: an int that is the last digit
 */

int print_last_digit(int n)
{
	int v;

	v = n % 10;
	if (v < 0)
	v *= -1;
	_putchar('0' + v);
	return (v);
}
