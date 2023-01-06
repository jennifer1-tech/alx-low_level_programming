#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: check if its up to three places
 * @argv: take the values and multiply
 * Return: print error if the values as not valid or return the
 * result if the values are validated appropriately
 */

int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc == 3)
	{
		mul = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
