#include "main.h"

/**
 * _strpbrk - main function declaration
 * @s:compare values
 * @accept: print matching values
 * Return: allowed values
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
	for (i = 0; accept[i] != '\0'; i++)
	{
		if (accept[i] == *s)
			return (s);
	}
	s++;
}
	return ('\0');
}
