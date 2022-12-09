#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print base 16
 * Return: Always 0 (success)
 */
int main(void)
{
	int w;
	char dennis;

	for (w = '0'; w <= '9'; w++)
	{
		putchar(w);
	}
	for (dennis = 'a'; dennis <= 'f'; dennis++)
	{
		putchar(dennis);
	}
	putchar('\n');
	return (0);
}
