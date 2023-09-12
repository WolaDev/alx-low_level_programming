#include <stdio.h>

/**
 * main - print alphabet in lowercase in exception of 'q' and 'e'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;
	
	letter = 'a';
	
	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
		putchar(letter);
		}
		letter++;
	}
	putchar('\n');
	return (0);
}

