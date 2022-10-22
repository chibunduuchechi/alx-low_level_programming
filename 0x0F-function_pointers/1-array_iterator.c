#include "function_pointers.h"

/**
 * array_iterator - main entry point
 * Description: Executes a function given as a parameter
 * on each element of an array
 * @size: The size of array
 * @array: The array
 * @action: A pointer to the function to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
