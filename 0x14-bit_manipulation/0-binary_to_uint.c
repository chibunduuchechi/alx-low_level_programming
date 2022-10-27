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
	unsigned int val = 0;

	if (!b)
		return (0);

	for (m = 0; b[m] != '\0';  m++)
	{
		val <<= 1;
		if (b[m] == '1')
			val += 1;
		else
		{
			if (b[m] != '0' && b[m] != '1')
				return (0);
		}
	}
	return (val);
}
