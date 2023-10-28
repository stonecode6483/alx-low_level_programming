#include "main.h"
/**
 * _strncpy -a programe that copy the string pointed
 * at the source
 * @dest: location copy to
 * @src: source copy from
 * Return: value of string
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
