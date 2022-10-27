#include "main.h"

/**
 * get_bit - main entry point
 * Description: returns the value of a bit at a given index
 * @index: is an unsigned int
 * @n: is unsigned long int number
 * Return: return 1 when bit is 1 else retur 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(index) * 8))
		return (-1);
	if ((n >> index) & 1)
		return (-1);
	return (1);
	return (0);
}
