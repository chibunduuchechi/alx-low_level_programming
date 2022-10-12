#include "main.h"

/**
 * leet - main entylry point
 * Description: encodes a script to 1337
 * @s: input string
 * Return: the pointer dest
 */

char *leet(char *s)
{
	int count = 0, m;
	int lower_case[] = {97, 101, 111, 116, 108};
	int upper_case[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (m = 0; m < 5; m++)
		{
			if (*(s + count) == lower_case[m] || *(s + count) == upper_case[m])
			{
				*(s + count) = numbers[m];
				break;
			}
		}
		count++;
	}
	return (s);
}
