#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print numbers
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = '0'; i < 10; i++)
		printf("%d", i);

	printf("\n");

	return (0);
}
