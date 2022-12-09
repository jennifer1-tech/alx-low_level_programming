#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '0'; tens++)/* prints tens digit*/
	{
		for (ones = '0'; ones <= '0'; ones++)/* prints ones digit*/
                {
			if (!((ones == tens) || (tens > ones)))/*eliminates repitition*/
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '0' && tens == '8'))/*addes comma and space*/
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return(0);
}
