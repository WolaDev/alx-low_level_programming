#include "main.h"
#include <stdio.h>

/**
 * _isdigit: check if it's digit
 *
 * @c: function parameter
 *
 * Return: 1 if digit otherwise 0.
 */
int _isdigit(int c)
{
	if (c >= 48  && c <= 57)
		return (1);
	else
		return (0);
}
