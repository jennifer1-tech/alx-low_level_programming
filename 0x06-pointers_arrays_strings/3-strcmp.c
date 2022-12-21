#include "main.h"

/**
 * _strcmp - compares two strings values
 * @sl: string 1
 * @s2: string 2
 * Return: the difference in sl and s2
 */
int _strcmp(char *sl, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
	return (*s1 - *s2);
	}
}
