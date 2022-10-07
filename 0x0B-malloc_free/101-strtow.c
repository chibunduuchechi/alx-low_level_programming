#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * count_word - main entry point
 * Description: splits a string into two words
 * @s: string to be evaluated
 * Return: the number of words
 */
int count_word(char *s)
{
	int flag, m, n;

	flag = 0;
	n = 0;

	for (m = 0; s[m] != '\0'; m++)
	{
		if (s[m] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			n++;
		}
	}
	return (n);
}

/**
 * strtow - entry point
 * Description: splits a string into two words
 * @str: string to be splitted
 * Return: pointer
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int a, b = 0, length = 0, words, c = 0, start, end;

	while (*(str + length))
		length++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));

	if (matrix == NULL)
		return (NULL);

	for (a = 0; a <= length; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				end = a;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[b] = tmp - c;
				b++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = a;
	}

	matrix[b] = NULL;

	return (matrix);
}

