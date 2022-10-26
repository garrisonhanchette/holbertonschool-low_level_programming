#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Executes a function parameter on each element
 * in a array
 *
 * @array: Given array
 * @size: Size of given array
 * @action: Pointer to function to be used
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
