#include "main.h"
/**
 * binary_to_uint - main entry point
 * Description: converts a binary number to unsigned int
 * @b: string containing the binary number
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int m;
	unsigned int uint, val;

	if (!b)
		return (0);

	for (m = 0; b[m]; m++)
		;
	m--;
	for (val = 1, uint = 0; m >= 0; m--)
	{
		if (b[m] == '0')
		{
			val *= 2;
			continue;
		}
		else if (b[m] == '1')
		{
			uint += val;
			val *= 2;
			continue;
		}
		return (0);
	}
	return (uint);
}
