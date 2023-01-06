#include <stdio.h>

/**
 * main - return the number of argument
 * @argv: call the vector
 * @argc: count the number of argument passed to main
 * Return: print the counts
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
