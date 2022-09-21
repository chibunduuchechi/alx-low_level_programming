#include "main.h"
#include <stdio.h>

/**
 * _isupper - main entry point
 *
 * Description: function that checks for uppercase
 *
 * @c: describes the parameter
 *
 * Return: Always 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
