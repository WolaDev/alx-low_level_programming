#include <stdio.h>

/**
 * main - Print alphabet in descending order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char d;

	d = 'z';

	while (d >= 'a')
	{
		putchar(d);
		d--;
	}
	putchar('\n');

	return (0);
}
