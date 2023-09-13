#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print base 10 single digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 0;

	while(i < 10)
	{
		putchar('0' + i);
		i++;
	}
	putchar('\n');

	return (0);
}
