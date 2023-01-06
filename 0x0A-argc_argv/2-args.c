#include <stdio.h>

/**
 *  main - print all arguments
 *  @argc: count elements
 *  @argv: take the values here
 *  Return: return what was given
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
