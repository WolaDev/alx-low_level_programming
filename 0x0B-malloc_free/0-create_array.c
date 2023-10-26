#include "main.h"
/**
 * create_array - function that creates an array of chars,
 *  and initializes it with a specific char
 * @size: first bytes of the memory
 * @c: constant byte b
 * Return: pointer to the resulting string dests
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	int u = size;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	while (u >= 0)
	{
		s[u] = c;
		u--;
	}
	return (s);
}
