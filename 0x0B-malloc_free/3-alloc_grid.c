#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - main entry point
 * Description: returns a pointer to a two dimensional
 * array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int m = 0, n;

	if (width == 0 || height == 0)
		return (NULL);
	array = (int **) malloc(sizeof(int *) * height);
	if (array != NULL)
	{
		for (; m < height; m++)

		{
			array[m] = (int *) malloc(sizeof(int) * width);
			if (array[m] != NULL)
			{
				for (n = 0; n < width; n++)
					array[m][n] = 0;
			}
			else
			{
				while (m >= 0)
				{
					free(array[m]);
					m++;
				}
				free(array);
				return (NULL);
			}
		}
		return (array);
	}
	else
	{
		return(NULL);
	}
}


