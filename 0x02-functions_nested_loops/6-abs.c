#include "main.h"
#include <stdio.h>

/**
* _abs - computes the absolute value of an integer
* @t: The integer to be computed
* Return: The absolute value
*/
int _abs(int t)
{
	if (t >= 0)
		return (t);
	else
		return (-t);
}
