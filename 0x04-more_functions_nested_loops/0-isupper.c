#include "main.h"

/**
 * _isupper - check id a character is in uppercase
 *
 * @c: function parameter
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')

		return (1);
	else
		return (0);
}
