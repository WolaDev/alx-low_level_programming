#include "main.h"

/**
 * factorial - print factorial of numbers greater that 0
 * @s: firts bytes of the memory
 * Return: -
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n -1));
}
