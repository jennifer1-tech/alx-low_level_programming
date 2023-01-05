#include "main.h"

/**
 * _strchr - print from the stated letter
 * @s: store the provided values
 * @c: print values starting from c
 * Return: the value of s
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
