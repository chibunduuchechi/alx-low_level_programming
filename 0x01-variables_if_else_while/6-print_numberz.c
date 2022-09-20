#include <stdio.h>
#include <stdlib.h>

/**
 * main - main entry point
 *
 * Description: printing digits using putchar
 *
 * Return: 0
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
