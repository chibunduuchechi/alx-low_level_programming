#include <stdio.h>
#include <stdlib.h>

/**
 * main - main entry point
 *
 * Description: printing three digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int num1 = 0;

	while (num1 <= 9)
	{
		int num2 = 0;

		while (num2 <= 9)
		{
			int num3 = 0;

			while (num3 <= 9)
			{
				if (num1 != num2 && num1 < num2 && num2 != num3 && num2 < num3)
				{
					putchar(num1 + 48);
					putchar(num2 + 48);
					putchar(num3 + 48);

					if (num1 + num2 + num3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				++num3;
			}
			++num2;
		}
		++num1;
	}
	putchar('\n');
	return (0);
}
