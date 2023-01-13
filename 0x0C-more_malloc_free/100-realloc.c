#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memcpy - copies memory area.
 * @dest: the memory area to be filled
 * @src: the origin memery area
 * @n: number of bytes to copy
 *
 * Return: a pointer to the memory area dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	for (; n; n--)
		*p++ = *src++;

	return (dest);
}

/**
 * _realloc - reallocates a memory block.
 * @ptr: pointer to the memory previously allocated.
 * @old_size: old size of pointer
 * @new_size: new size of pointer
 *
 * Return: void *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;

	if (new_size == old_size)
		return (ptr);

	if ((new_size == 0) && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
	{
		free(ptr);
		nptr = malloc(new_size);
		if (!nptr)
			return (NULL);
		return (nptr);
	}

	if (new_size > old_size)
	{
		nptr = malloc(new_size);
		if (!nptr)
			return (NULL);

		_memcpy(nptr, ptr, old_size);
		free(ptr);
	}
	return (nptr);
}
