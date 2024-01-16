#include "main.h"
/**
 * _memcpy - a function that copy  memory location to another memory location
 * @dest: primary memory
 * @src: memeory where its copied
 * @n: value of bytes
 * Return: memory copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}

