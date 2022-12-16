#include "main.h"

/**
 * print_triangle - function that print a triangle
 * @size: input integer
 * Return: Always 0
 */
void print_triangle(int size)
{
	int i = 0, j, n = size - 1;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < n)
					_putchar(' ');
				else
					_putchar('0');
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
