#include <stdio.h>
#include <stdlib.h>

/**
 * main - main entry point
 *
 * Description: printing single digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n + 48);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		++n;
	}
	putchar('\n');
	return (0);
}
