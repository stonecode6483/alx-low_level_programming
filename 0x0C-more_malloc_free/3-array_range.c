#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Write a function that creates an array of integers.
 * @min : value of array
 * @max: value of array
 * Return: pointer to the allocated memory
 */
int *array_range(int min, int max)
{
	int a, b;
	int *c;

	if (min > max)
		return (NULL);
	b = max - min + 1;
	c = malloc(sizeof(int) *  b);
	if (c == NULL)
		return (NULL);
	for (a = 0; a < b; a++)
	{
		c[a] = min;
		min++;
	}
	return (c);
}

