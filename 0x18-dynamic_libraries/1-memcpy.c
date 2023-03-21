#include "main.h"

/**
 * _memcpy - copy the values from src to dest
 * @dest: copy the values in src to dest
 * @src: the files here can be copied
 * @n: this represents the size of buffer to be copied
 * Return: return the value to the print out
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
