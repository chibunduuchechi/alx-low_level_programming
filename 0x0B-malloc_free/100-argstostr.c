#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - main entry point
 * Description: concatenates all arguments of program
 * @ac: input
 * @av: pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int m, n, o = 0, p = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (m = 0; m < ac; m++)
	{
		for (n = 0; av[m][n]; n++)
			p++;
	}
	p += ac;

	str = malloc(sizeof(char) * p + 1);
	if (str == NULL)
		return (NULL);
	for (m = 0; m < ac; m++)
	{
	for (n = 0; av[m][n]; n++)
	{
		str[o] = av[m][n];
		o++;
	}
	if (str[o] == '\0')
	{
		str[o++] = '\n';
	}
	}
	return (str);
}
