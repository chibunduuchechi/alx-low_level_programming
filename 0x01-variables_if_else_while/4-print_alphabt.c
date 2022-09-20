#include <stdio.h>

/**
 * main - entry point
 *
 * Description: printing he alphabets without q and e
 *
 * Return: 0
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet == 'e' || alphabet == 'q')
			++alphabet;
		putchar(alphabet);
		++alphabet;
	}
	putchar('\n');
	return (0);
}
