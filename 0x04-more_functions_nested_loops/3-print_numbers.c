#include "main.h"
#include <stdio.h>

/**
 * print_numbers - main entry point
 *
 * Description: printing digits from 0 to 9
 *
 * Return: 0
 */

void print_numbers(void)
{
	int num;

	num = 0;

	do {
		_putchar(num + 0 || num + 48);
		num++;
	} while (num >= 0 && num <= 9);
	_putchar('\n');
}
