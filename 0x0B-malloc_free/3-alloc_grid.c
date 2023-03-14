#include <stdlib.h>

/**
 * alloc_grid - Allocates memory for a 2D array of integers and initializes
 *              all elements to 0.
 * @width: The width of the 2D array.
 * @height: The height of the 2D array.
 *
 * Return: If memory allocation fails or either width or height is 0 or
 *         negative, return NULL. Otherwise, return a pointer to the 2D
 *         array of integers.
 */
int **alloc_grid(int width, int height)
{
        int **grid, i, j;

        if (width <= 0 || height <= 0)
                return (NULL);

        grid = malloc(height * sizeof(int *));
        if (grid == NULL)
                return (NULL);

        for (i = 0; i < height; i++)
        {
                grid[i] = malloc(width * sizeof(int));
                if (grid[i] == NULL)
                {
                        /* Free all previously allocated memory */
                        for (j = 0; j < i; j++)
                                free(grid[j]);
                        free(grid);
                        return (NULL);
                }

                /* Initialize all elements to 0 */
                for (j = 0; j < width; j++)
                        grid[i][j] = 0;
        }

        return (grid);
}
