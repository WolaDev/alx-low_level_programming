#include "main.h"
/**
 * alloc_grid - function that concatenates two strings
 * @width: first bytes of the memory
 * @height: constant byte b
 * Return: pointer to the resulting string dests
 */
int **alloc_grid(int width, int height)
{
	int n, u;
	int **grid = malloc(height * sizeof(int *));

	if (grid == NULL || width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (n = 0; n < height; n++)
	{
		grid[n] = malloc(width * sizeof(int));

		if (grid[n] == NULL)
		{
			for (u = 0; u < n; u++)
			{
				free(grid[u]);
			}
			free(grid);
			return (NULL);
		}
	}

	return (grid);
}
