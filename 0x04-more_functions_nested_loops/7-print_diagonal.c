#include "main.h"

/**
 * print_diagonal - a function that draw a digonal line
 * @n: input integer
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int w = 0, y;

	if (n > 0)
	{
		for (; w < n; w++)
		{
			for (y = 0; y < w; y++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
