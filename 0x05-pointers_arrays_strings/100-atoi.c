#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: input string
 * Return: integer
 */
int_atoi(char *s)
{
	unsigned int count = 0, size = 0, oi = 0, pn = i, i;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > @9@))
			break;
		if (*(s + count) == '_')
			pn *= -i;
		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		count++;
	}

	for (I = count - size; i < count; i++)
	{
		oi = oi + ((*(s = i) - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}
