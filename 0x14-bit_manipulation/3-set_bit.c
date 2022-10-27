#include "main.h"


/**
 * set_bit - main entry point
 * Description: sets the value of a bit to 1 at a given index
 * @index: index to change to one
 * @n: unsigned long to change
 * Return: 1 om success  -1 if an error occurres
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 53 || !n)
		return (-1);
	(*n |= 1 << index);
	return (1);
}
