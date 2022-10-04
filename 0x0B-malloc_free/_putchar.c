#include <unistd.h>
/**
 * _putchar - main entry point
 * Description: write the char c to stdout
 * @c: te char to print
 * Return: 1 on success
 * return -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
