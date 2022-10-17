#include "main.h"
#include <stdio.h>

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - main entry point
 * Description: Checks if a number is divisible
 * @num: The number to be checked
 * @div: The divisor
 * Return: If the number is divisible return 0
 * if number is not divisible return -1
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - entry point
 * Descripiton: Checks if a number is prime
 * @n: The number to be checked
 * Return: If the integer is not prime return 0
 * If the number is prime return -1
 */

is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, div));
}

