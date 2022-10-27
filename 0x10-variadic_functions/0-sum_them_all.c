#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - main entry point
 * Description: sum of all its parameters
 * @n: number of parameters
 * Return: If n == 0 - 0, else the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int m;
	va_list valist;

	va_start(valist, n);
	for (m = 0; m < n; m++)
		sum += va_arg(valist, int);
	va_end(valist);
	return (sum);
}
