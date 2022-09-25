#include <stdio.h>

/**
 * main - main entry point
 *
 * Description: printing large factors of 612852475143
 *
 * Return: 0
 */

int main(void)
{
	unsigned long number = 612852475143;
	unsigned long divisor = 2;

	while (divisor < number)
	{
		if (number % divisor == 0)
		{
			number /= divisor;
			divisor = 2;
		}
		else
			divisor++;
	}
	printf("%lu\n", number);
	return (0);
}
