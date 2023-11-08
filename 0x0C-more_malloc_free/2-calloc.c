#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of array set
 * @size: size of array
 * Return: pointer to th newly allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = calloc(nmemb, size);
	if (str == NULL)
		return (NULL);
	else
		return (str);
}
