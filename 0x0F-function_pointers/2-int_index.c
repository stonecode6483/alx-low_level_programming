#include "function_pointers.h"
#include  <stdio.h>
/**
 * int_index -  function that searches for an integer
 * @array: the array
 * @size: size of array
 * @cmp: pointer to the function of one the 3 main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int g;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (g = 0; g < size; g++)
	{
		if (cmp(array[g]))
			return (g);
	}
	return (-1);
}
