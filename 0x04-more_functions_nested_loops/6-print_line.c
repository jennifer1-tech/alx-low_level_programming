#include "main.h"

/**
 * print_line - function that draws a line
 * @n: input integer
 * Return: Always 0
 */
void print_line(int n)
{
	int w = 0;

	if (n > 0)
	{
		for (; w < n; w++)
			_putchar('_');
	}
	_putchar('\n');
}
