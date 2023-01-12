#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - counts and returns string length
 * @s: the input string
 *
 * Return: the length
 */

int _strlen(char *s)
{
	int c = 0;

	for (c = 0; *s; c++)
		s++;

	return (c);
}

/**
 * string_nconcat - concatenates 2 strings
 * @s1: the first str
 * @s2: the second str
 * @n: how much of s2 to add
 *
 * Return: ptr to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nstr;
	unsigned int idx, jdx, s1l, s2l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1l = _strlen(s1);
	s2l = _strlen(s2);

	n = (n >= s2l) ? s2l : n;

	nstr = malloc((s1l + n) * sizeof(char) + 1);
	if (!nstr)
		return (NULL);

	for (idx = 0; idx < s1l; idx++)
		nstr[idx] = s1[idx];

	for (jdx = 0; jdx < n; jdx++, idx++)
		nstr[idx] = s2[jdx];

	nstr[idx] = '\0';
	return (nstr);
}
