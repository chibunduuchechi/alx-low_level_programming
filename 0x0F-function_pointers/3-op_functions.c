#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - main entry point
 * Description: Returns the sum of two numbers
 * @a: The first number
 * @b: The second number
 * Return: The sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - entry point
 * Description: Returns the difference of two numbers
 * @a: The first number
 * @b: The second number
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_sub - entry point
 * Description: Returns the product of two numbers
 * @a: The first number
 * @b: The second number
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_sub - entry point
 * Description: Returns the division of two numbers
 * @a: The first number
 * @b: The second number
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_sub - entry point
 * Description: Returns the remainder of division of two numbers
 * @a: The first number
 * @b: The second number
 */
int op_mod(int a, int b)
{
	return (a % b);
}
