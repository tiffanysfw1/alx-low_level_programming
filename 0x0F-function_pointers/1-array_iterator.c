#include "function_pointers.h"

/**
 * array_iterator - function that execute another function
 * @array: array
 * @action: pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size > 0)
		size--;
	{
		action(*array)
			array++;
	}
}
