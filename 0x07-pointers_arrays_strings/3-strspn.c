#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: parameter 1
 * @accept:parameter 2
 * Return:counted
 */
unsigned int _strspn(char *s, char *accept)
{
	int j;
	int k;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (k = 0; s[k] != accept[k]; k++)
		{
			if (accept[k] == '\0')
				return (j);
		}
	}
return (0);
}
