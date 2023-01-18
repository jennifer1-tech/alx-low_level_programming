#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers.
<<<<<<< HEAD
 *  @a: The first number.
 *  @b: The second number.
 *
 *  Return: The sum of a and b.
=======
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The sum of a and b.
>>>>>>> 232c21fd43e6e78de563b098d48db76521fd6d75
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the difference of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
<<<<<<< HEAD
	return (a * b);
}
/**
 * op_mul - Returns the remainder of the division of two numbers.
=======
	return (a - b);
}
/**
 * op_mul - Returns the product of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder of the division of two numbers.
>>>>>>> 232c21fd43e6e78de563b098d48db76521fd6d75
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of the division of a by b.
 */
<<<<<<< HEAD
int op_mul(int a, int b)
=======
int op_mod(int a, int b)
>>>>>>> 232c21fd43e6e78de563b098d48db76521fd6d75
{
	return (a % b);
}
