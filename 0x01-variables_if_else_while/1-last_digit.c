#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print last digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	printf("Last digit of %d is ", n);
			if (last_digit > 5)
			printf("%d and is greater than 5\n", last_digit);
			else if (last_digit == 0)
			printf("%d and is 0\n", last_digit);
			else if (last_digit < 6)
			printf("%d and is less than 6 and not 0", last_digit);

	printf("\n");

	return (0);
}
