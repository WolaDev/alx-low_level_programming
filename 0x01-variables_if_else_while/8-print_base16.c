#include <stdio.h>

/**
 * main - print base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char base = '0';
	char lower = 'a';

	while (base <= '9')
	{
		putchar(base);
		base++;
	}

	while (lower <= 'f')
	{
		putchar(lower);
		lower++;
	}

	putchar('\n');

	return (0);
}
