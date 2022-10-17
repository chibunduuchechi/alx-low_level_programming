#include "main.h"
#include <stdio.h>

/**
 * main - main entry point
 * Description: Prints all arguments passed into main
 * @argv: Array name
 * @argc: Number of command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);

	return (0);
}
