#include "main.h"

/**
 * _memset - fill memory of n with b
 * @s: fill the vallue of b in it
 * @b: fill this value in pointer s
 * @n: this represents the size of the buffer
 * Return: return s value
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
