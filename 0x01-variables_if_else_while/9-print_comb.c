#include <stdio.h>

/**
 * main - print all possible combination of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 <= 9; digit1++)
	{
	for (digit2 = digit1 + 1; digit2 <= 9; digit2++)
	{
		putchar(digit1 + '0');
		putchar(',');
		putchar(' ');
		putchar(digit2 + '0');

	if (digit1 != 8 || digit2 != 9) {
                putchar(',');
                putchar(' ');
	    }
	}
    }

	putchar('\n');

    return (0);
}
