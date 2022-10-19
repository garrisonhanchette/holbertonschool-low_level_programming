#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of ints
 * @min: lower int value
 * @max: upper int value
 * Return: arr
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * (sizeof(int)));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < max - min + 1; i++)
		arr[i] = min + i;

	return (arr);
}
