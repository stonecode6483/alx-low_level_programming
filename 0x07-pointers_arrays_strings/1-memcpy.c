#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @n: parameter 1
 * @dest: parameter 2
 * @src:parameter 3
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
