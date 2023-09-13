#include <stdio.h>

/**
 * main - Print base 10 single digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int i = 0; i < 10;)
	{
		putchar("%d", i);
		i++;
	}
	putchar("\n");

	return (0);
}
