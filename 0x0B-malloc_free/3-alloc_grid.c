#include <stdlib.h>

/**
 * alloc_grid - allocate a 2 dimensional array of integers
 * @width: width
 * @height: height
 *
 * Return: pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **g;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	g = (int **) malloc(height * sizeof(int *));
	if (!g)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		g[i] = (int *) calloc(width, sizeof(int));
		if (g[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(g[j]);
			}
			free(g);
			return (NULL);
		}
	}
	return (g);

}
