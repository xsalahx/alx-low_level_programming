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

	if (width <= 0 || height <= 0)
		return (NULL);
	g = (int **) malloc(height * sizeof(int *));
	if (!g)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		g[i] = (int *) calloc(width, sizeof(int));
		if (g[i])
		{
			i--;
			while (i >= 0)
			{
				free(g[i]);
				i--;
			}
			free(g);
			return (NULL);
		}
	}
	return (g);

}
