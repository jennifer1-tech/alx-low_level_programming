#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print all possible different combination of two digits
 * Return: Always 0 
 */
int main(void)
{
	int w, n;

	for (w = 0; w < 9; w++)
	{
		for (n = w + 1; n < 10; n++)
		{
			putchar(w % 10) + '0');
			putchar((n % 10) + '0');

			if (w == 8 && n == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
