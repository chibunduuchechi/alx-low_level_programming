#include <stdio.h>

/**
 * main - entry point
 *
 * Description: printing alphabets
 *
 * Return: 0
 *
 */
int main(void)
{
	char alphabets = 'a';

	while (alphabets <= 'z')
	{
		putchar(alphabets);
		++alphabets;
	}
	putchar('\n');

	return (0);
}
