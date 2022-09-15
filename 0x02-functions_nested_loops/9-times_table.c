#include"main.h"

/**
 * times_table - prints the 9 times table
 *
 * Example of the Table
 * 0, 1, 2, 3, ..
 */

void times_table(void)
{
	int number, mult, prod;

	for (number = 0; number <= 9; ++number)
	{
		_putchar(48);

		for (mult = 1; mult <= 9; ++mult)
		{
			_putchar(',');
			_putchar(' ');

			prod = number * mult;
			/**
			 * put a space if the product i a single number
			 * place the first digit first if its two numbers
			 */
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48); /*get the first digit*/
			_putchar((prod % 10) + 48); /*get the second digit*/
		}
		_putchar('\n');
	}
}


