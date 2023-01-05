#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: scan the strings
 * @accept: find the match strings to s
 *Return: return the result
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, val = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				val++;
				break;
			}
			else if ((accept[i + 1]) == '\0')
				return (val);
		}
		s++;
	}
	return (val);
}
