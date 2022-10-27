#include "main.h"

/**
 * clear_bit - main entry point
 * Description: sets the value of a bit to 0 at a given index
 * @index: index to change to zero
 * @n: unsigned long to change
 * Return: 1 on success or -1 if an error occurres
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int clear;

	if (index > 53 || !n)
		return (-1);
	clear = 1 << index;
	*n = (*n & ~clear) | ((0 << index) & clear);
	return (1);
}
