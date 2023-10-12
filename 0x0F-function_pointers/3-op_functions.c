#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - This will return the addition of two numbers.
 * @a: The first number to add
 * @b: The second number to be added
 *
 * Return: The addition of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub -This will return the subtraction of two numbers.
 * @a: The first number to be subtracted
 * @b: The second number subtracted
 *
 * Return: The difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - This will return the multiplication of two numbers.
 * @a: The first number to be multiplied
 * @b: The second number multiplied
 *
 * Return: The multiplication of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the division of two numbers.
 * @a: The first number to be divided
 * @b: The second number
 *
 * Return: The quotient of a and b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - This return the remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of the division of a by b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
