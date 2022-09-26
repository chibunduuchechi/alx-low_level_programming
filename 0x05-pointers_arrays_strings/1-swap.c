#include "main.h"

/**
 * swap_int - main entry point
 *
 * Description: swap ing integers
 *
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	int d = *a;
	*a = c;
	*b = d;
}
