#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocates a grid
 * @width: width of grid
 * @height: height of grid
 * Return: grid thats free
 */
int **alloc_grid(int width, int height)
{
int **G;
int k, j;

if (width + height < 2 || width < 1 || height < 1)
{
return (NULL);
}

G = malloc(height * sizeof(*G));

if (G == NULL)
{
return (NULL);
}

for (k = 0; k < height; k++)
{
G[k] = malloc(width * sizeof(**G));
if (G[k] == NULL)
{
for (k = k - 1; k >= 0; k--)

free(G[k]);
free(G);
return (NULL);
}
for (j = 0; j < width; j++)
G[k][j] = 0;
}
return (G);
}
