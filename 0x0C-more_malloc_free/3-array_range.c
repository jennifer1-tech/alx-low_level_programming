#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: lower end of values
 * @max: upper end
 *
 * Return: int *
 */

int *array_range(int min, int max)
{
	int *ptr;
	int idx, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	ptr = malloc(len * sizeof(int));
	if (!ptr)
		return (NULL);

	for (idx = 0; idx < len; idx++)
		ptr[idx] = min++;

	return (ptr);
}
