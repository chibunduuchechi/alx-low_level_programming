#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - main entry point
 * Description: returns square root of a number
 * @n: number to be squarerooted
 * @c: the counter
 * Return: sqrt
 */

int real_root(int n, int c);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_root(n, 0));
}

/**
 * real_root - will find matural squareroot of a numher
 * @c: the counter
 * @n: inputed number
 * Return: sqrt
 */

int real_root(int n, int c)
{
	if (c * c > n)
		return (-1);
	if (c * c == n)
		return (c);
	return (real_root(n, c + 1));
}
