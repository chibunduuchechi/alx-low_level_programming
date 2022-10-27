#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_c(va_list arg);
void print_i(va_list arg);
void print_f(va_list arg);
void print_s(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_c - main entry point
 * Description: print a char
 * @arg: arguments pointing to char to be printed
 * Return: 0
 */

void print_c(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_s - entry point
 * Description: prints a string
 * @s: string to print
 * Return: 0
 */

void print_s(va_list s)
{
	char *str;

	str = va_arg(s, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_i - entry point
 * Description: print an int
 * @i: int to print
 * Return: 0
 */

void print_i(va_list i)
{
	int num;

	num = va_arg(i, int);
	printf("%d", num);
}

/**
 * print_f - entry point
 * Description: prints a float
 * @f: float to print
 * Return: 0
 */

void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_all - entry point
 * Description: prints anything
 * @format: list of argument types to the function
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int m = 0, n = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s}
	};

	va_start(args, format);

	while (format && (*(format + m)))
	{
		n = 0;

		while (n < 4 && (*(format + m) != *(funcs[n].symbol)))
			n++;
		if (n < 4)
		{
			printf("%s", separator);
			funcs[n].print(args);
			separator = ", ";
		}

		m++;

	}

	printf("\n");

	va_end(args);

}
