#include <stdio.h>
#include <stdlib.h>

/**
 * main - main entry point
 *
 * Description: printing digits
 *
 * Return: 0
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%d", n);
		++n;
	}
	printf("\n");
	return (0);
}
