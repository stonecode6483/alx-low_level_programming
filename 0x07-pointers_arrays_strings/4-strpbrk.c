#include "main.h"
/**
 * _strpbrk()-  function locates the first occurrence in the string
 * s of any of the bytes in the string accept
 * @s: parameter 1
 * @accept: parameter 2
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;

	while (*a != '\0')
	{
		if (*s == *a)
			return (s);
		a++;
	}
	s++;
	}
	return (0);
}

