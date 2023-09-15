#include <stdio.h>

/**
 * main - possible combinations of two two-digits numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1;
	int digit2;
	int digit3;
	int digit4;

	for (digit1 = 0; digit1 <= 9; digit1++)
	{
		for (digit2 = 0; digit2 <=9; digit2++)
		{
			putchar(digit1 + '0');
			putchar(digit2 + '0');
			putchar(' ');
	
		for (digit3 = 0; digit3 <=9; digit3++)
		{
			for (digit4 = digit3 + 0; digit4 <= 9; digit4++)
			{
				putchar(digit3 + '0');
				putchar(digit4 + '0');
				putchar(',');
				putchar(' ');
			}
		}
		}
	}

	putchar('\n');

	return (0);
}
