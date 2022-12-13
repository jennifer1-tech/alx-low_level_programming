#include "main.h"
#include <stdio.h>

/**
 * _islower - checks if a character is lowercase
 * @c: the character to be checked
 * Return: if character is lower case, otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
