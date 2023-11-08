#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function returns a pointer to a new string which is a
 * duplicate of the string str
 * @str: character
 * Return: 0
 */
char *_strdup(char *str)
{
	char *bbb;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;

	while (str[i] != '\0')
		i++;

	bbb = malloc(sizeof(char) * (i + 1));
	if (bbb == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		bbb[r] = str[r];
	return (bbb);
}
