#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - main entry
 * @b: return the memory to the size of b
 * Return: return the size of memory as allocated by malloc
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
