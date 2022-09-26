#include "main.h"
#include <stdio.h>

/**
 * print_array - main entry point
 *
 * Description: printing n elements of array of integers
 *
 * @a: array
 * @n: n elements
 * Return: 0
 */

void print_array(int *a, int n)
{
	int c = 0;

	for (; c < n; c++)
	{
		printf("%d", *(a + c));
			if (c != (n - 1))
				printf(", ");
	}
	printf("\n");
}
