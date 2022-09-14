#include"main.h"

/**
 * print_alphabet_x10 - function printing the alphabet 10 times
 */

void print_alphabet_x10(void)

{
	int line, alphabet;

	for (line = 0; line <= 9; ++line)
	{
		for (alphabet = 'a'; alphabet <= 'z'; ++alphabet)
		_putchar(alphabet);
		_putchar('\n');
	}
}
