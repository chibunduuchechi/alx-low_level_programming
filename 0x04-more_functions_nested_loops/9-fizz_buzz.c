#include "main.h"
#include <stdio.h>

/**
 * main - main entry point
 *
 * Description: printing numbers from 1 to 100
 * prints fizz in place of multiples of 3
 * prints buzz for multipes of 5
 * prints fizzbuzz for multiples of both 3 qnd 5
 *
 * Return: 0
 */

int main(void)
{
	int c;

	for (c = 1; c <= 100; c++)
	{
		if (c == 100)
			printf("Buzz");
		else if (((c % 3) == 0) && ((c % 5) == 0))
			printf("FizzBuzz");
		else if ((c % 3) == 0)
			printf("Fizz");
		else if ((c % 5) == 0)
			printf("Buzz");
		else
			printf("%d", c);
	}
	printf("\n");
	return (0);
}
