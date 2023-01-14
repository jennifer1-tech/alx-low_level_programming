#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - main - entry
 * @s1: take the characters in this memory
 * @s2: concatenate this strings to the s1 variable
 * @n: check for the legnth of the characters in s2
 * Return: return the pointer to the standard output
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n > j)
		n = j;
	ptr = malloc(((i + n) + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; j != n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
