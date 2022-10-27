#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - main entry point
 * Description: prints strings, followed by new line
 * @separator: separator to print between the strings
 * @n: number of strings to print
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int m;
	char *str;
	va_list valist;

	va_start(valist, n);
	for (m = 0; m < n; m++)
	{
		str = va_arg(valist, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (m < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
