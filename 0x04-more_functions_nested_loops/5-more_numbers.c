#include "main.h"
#include <stdio.h>

/**
 * more_numbers - main entry point
 *
 * Description: prints ten times the numbers from 0 to 14
 */

void more_numbers(void)
{
	int m, n;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));
		}
		_putchar('\n');
	}
}

