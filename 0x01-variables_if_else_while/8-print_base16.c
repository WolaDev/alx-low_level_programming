#include <stdio.h>

/**
 * main - print base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char base;
	char lower;

	for (base = '0'; base <= 9; base++)
	{
		putchar(base);
	}

	for (lower = 'a'; lower <= 'f'; lower++)
	{
		putchar(lower);
	}

	putchar('\n');

	return (0);
}
