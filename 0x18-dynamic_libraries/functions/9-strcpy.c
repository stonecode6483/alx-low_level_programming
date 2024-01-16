#include "main.h"
/**
 * _strncpy - Copies the string pointed to by src (including the
 * terminating null byte) to the buffer pointed to by dest.
 * @dest: location copy to
 * @src: source copy from
 * Return: pointer to the destination of buffer dest
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;
	int m = 0;

	while (*(src + n) != '\0')
	{
		n++;
	}
	for ( ; m < n ; m++)
	{
		dest[m] = src[n];
	}
	dest[n] = '\0';
	return (dest);
}
