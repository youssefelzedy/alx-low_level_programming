#include "main.h"

/**
 *is_prime_h - returns the natural square root of a number
 *@n: is integer
 *@k: is integer
 *Return: if prime Return 1 if not Return 0
 */

int is_prime_h(int n, int k)
{
	if (k == 1)
		return (1);
	if (n % k == 0)
		return (0);

	return (is_prime_h(n, k - 1));
}

/**
 *is_prime_number - returns the natural square root of a number
 *@n: number to be checked
 *Return: if prime or not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_h(n, n - 1));
}
