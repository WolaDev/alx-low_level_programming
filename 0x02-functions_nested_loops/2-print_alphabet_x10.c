#include "main.h"

/**
 * print_alphabet_10x - functionto print lowercase alphabet 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int t;
	char a;

	for (t = 0; t <= 9; t++)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
	}
}
