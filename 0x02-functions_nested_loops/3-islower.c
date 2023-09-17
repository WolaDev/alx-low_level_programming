#include "main.h"

/**
 * _islower - check lowercase character
 *
 * @c: parameter checking a lower case
 *
 * Return: Always 0 (Success).
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
