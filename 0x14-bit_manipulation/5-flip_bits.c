#include "main.h"

/**
 * flip_bits - main entry point
 * Description: number of bits you would need to flip to get
 * from one number to another
 * @m: destiny
 * @n: parameter
 * Return: 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int a, nflips = 0;
	unsigned long int b = sizeof(unsigned long int) * 8;

	for (a = 0; a < b; a++)
	{
		if ((m & 1) != (n & 1))
			nflips += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (nflips);
}
