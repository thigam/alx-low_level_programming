#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add- Returns the sum of two numbers
 * @a: First number
 * @b: second number
 *
 * Return: their sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub- Returns difference of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: Their difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul- Returns product of a and b
 * @a: First number
 * @b: Second number
 *
 * Return: Their product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div- Returns division of and b
 * @a: first number
 * @b: Second number
 *
 * Return: Their division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod- Returns the remainder of division
 * @a: First number
 * @b: Second number
 *
 * Return: The remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
