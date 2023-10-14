#include <stdio.h>

/**
 * main - print out all arguments
 * @argc: parameter for argument count
 * @argv: parameter for storing argv variables
 *
 * Description: -
 * Return: -
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
