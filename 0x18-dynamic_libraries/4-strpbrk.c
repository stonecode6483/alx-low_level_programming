#include "main.h"
/**
 * _strpbrk - a function that find a matching character
 * @s: input
 * @accept: input
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int z;

	while (*s)
	{
		for (z = 0; accept[z]; z++)
		{
			if (*s == accept[z])
				return (s);
		}
		s++;
	}
	return ('\0');
}
