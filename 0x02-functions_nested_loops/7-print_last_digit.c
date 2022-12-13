#include "main.h"
#include <stdio.h>

/**
* print_ last_digit - prints the last digit
* @n: The number
* Return: value of the last digit
*/
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (0);
}
