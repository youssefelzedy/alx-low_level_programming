#include "main.h"

/**
 *factorial -  factorial func
 *@n: is a int
 *Return: int
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);

	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
