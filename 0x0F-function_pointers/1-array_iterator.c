#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array
 * @array: variable  of arary
 * @size: size of the array
 *i @action: pointer to the array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;


	if (array == NULL || action == NULL)
		return;
	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
