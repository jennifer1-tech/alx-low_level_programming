#include "main.h"

/**
 * more_numbers - number that prints 10 times the number
 * Return: Always 0
 */

void more_numbers(void)
{
	int w, y = 0;

	for (; y < 10; y++)
	{
		for (w = 0; w <= 14; w++)
		{
			if (w > 9)
				_putchar(w / 10 + '0');
			_putchar (w % 10 + '0');
		}
		_putchar('\n');
	}
}
