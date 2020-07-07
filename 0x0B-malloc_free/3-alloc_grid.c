#include <stdlib.h>
#include "holberton.h"
/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@width: width of the array
 *@height: height of the array
 *
 *Return: - NULL if width or height are less or equal than zero,or if malloc
 *        fails
 *        - ptr pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **ptr = NULL;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);
	while (i < height)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			while (i >= 0)
			{
				i--;
				free(ptr[i]);
			}
			return (NULL);
		}
		i++;
	}
	i = 0;
	j = 0;
	while (i < height)
	{
		ptr[i][j] = 0;
		if (j == width - 1)
		{
			j = 0;
			i++;
			continue;
		}
		j++;
	}

	return (ptr);
}
