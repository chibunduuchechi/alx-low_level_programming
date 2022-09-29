#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - main entry point
 * Description: returns value of x raised to power y
 * @x: the value
 * @y: the power
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (0);
	return (x * _pow_recursion(x, y - 1));
}
