#include <stdio.h>

/**
 * add - adds two integers.
 * @a: first integer.
 * @b: second integer.
 * Return: the result of the addition.
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracts two integers.
 * @a: first integer.
 * @b: second integer.
 * Return: the result of the subtraction.
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies two integers.
 * @a: first integer.
 * @b: second integer.
 * Return: the result of the multiplication.
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divides two integers.
 * @a: first integer.
 * @b: second integer.
 * Return: the result of the division.
 */

int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (0);
	}
	return (a / b);
}

/**
 * mod - calculates the remainder of two integers.
 * @a: first integer.
 * @b: second integer.
 * Return: the remainder of the division.
 */

int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (0);
	}
	return (a % b);
}
