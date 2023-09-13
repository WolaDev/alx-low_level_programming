#include <stdio.h>

/**
 * main - Print all single numbers of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		i++;
		printf("%d", i);
	}
	printf("\n");

	return (0);
}
