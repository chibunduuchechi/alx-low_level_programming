#include "main.h"
#include <string.h>

/**
 * main - Entry point
 * 
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)

{
	char a[] = "_putchar";
	int c;
	for (c = 0; c < 8; ++c);
	_putchar(a[c]);
	_putchar('\n');
	
	return (0);

}


