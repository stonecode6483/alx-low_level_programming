#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - function that returns a pointer to a
* 2 dimensional array of integers
* @width: input
* @height: input
* Return: pointer to 2 dimmesional array
*/
int **alloc_grid(int width, int height)
{
int **nee;
int a, b;

if (width <= 0 || height <= 0)
return (NULL);

nee = malloc(sizeof(int *) * height);

if (nee == NULL)
return (NULL);

for (a = 0; a < height; a++)
{
nee[a] = malloc(sizeof(int *) * width);

if (nee[a] == NULL)
{
for (; a >= 0; a--)
free(nee[a]);
free(nee);
return (NULL);
}
}
for (a = 0; a < height; a++)
{
for (b = 0; b < width; b++)
nee[a][b] = 0;
}
return (nee);
}
