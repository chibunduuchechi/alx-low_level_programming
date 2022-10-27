#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - maim entry point
 * Description: prints numbers, followed by a new line
 * @separator: separator to print between numbers
 * @n: number of numbers to print
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int m;
	int num;
	va_list valist;

	va_start(valist, n);
	for (m = 0; m < n; m++)
	{
		num = va_arg(valist, int);
		printf("%d", num);
		if (m < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
