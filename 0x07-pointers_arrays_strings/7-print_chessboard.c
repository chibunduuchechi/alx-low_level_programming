#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - main entry point
 * Description: a function that prints the chessboard
 * @a: The chessboard to be printed
 */

void print_chessboard(char (*a)[8])
{
	int chessmen1, chessmen2;

	for (chessmen1 = 0; a[chessmen1][7]; chessmen1++)
	{
		for (chessmen2 = 0; chessmen2 < 8; chessmen2++)
			putchar(a[chessmen1][chessmen2]);
		putchar('\n');
	}
}
