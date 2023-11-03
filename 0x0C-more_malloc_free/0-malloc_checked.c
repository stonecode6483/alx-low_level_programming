#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - functiin that allocate memory using malloc
 * @b: size oif memory
 * Return: pointer to the newly allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	else
		return (ptr);
}
