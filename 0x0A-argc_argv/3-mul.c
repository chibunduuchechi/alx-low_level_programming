#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main entry point
 * Description: Program that takes first two integer arguments
 * and multiplies them
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if not enough arguments passed in, else return 0
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;

		for (i = 1; i < 3; i++)
			j *= atoi(argv[i]);

		printf("%d\n", j);
	}
	return (0);
}