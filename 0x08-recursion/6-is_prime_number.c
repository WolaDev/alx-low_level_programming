#include "main.h"

/**
 * is_prime_numberx - fills memory with a constant byte.
 * @n: first bytes of the memory
 * @u: first bytes of the memory
 * Return: -
 */
int is_prime_numberx(int n, int u)
{
	if (u > n / 2)
	{
		return (1);
	}
	if (n % u == 0)
	{
		return (0);
	}
	return (is_prime_numberx(n, u + 2));
}

/**
 * is_prime_number - fills memory with a constant byte.
 * @n: first bytes of the memory
 * Return: -
 */
int is_prime_number(int n)
{
	int u = 3;

	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	return (is_prime_numberx(n, u));
}
