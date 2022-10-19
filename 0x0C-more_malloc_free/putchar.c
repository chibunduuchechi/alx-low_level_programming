#include <unistd.h>

/**
 * _putchar - entry point
 * Description: writes character to standout
 * @c: the character
 * Return: return 1 on success and -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
