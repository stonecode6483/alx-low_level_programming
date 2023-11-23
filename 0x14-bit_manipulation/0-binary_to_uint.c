#include "main.h"
/**
 *  binary_to_uint - a function that converts a
 *  binary number to an unsigned int
 *  @b: a pointer to the string
 *  Return: converted number,0 if fail
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int numb;

	numb = 0;
	if (!b)
		return (0);
	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
	}
	for (j = 0; b[j] != '\0'; j++)
	{
		numb <<= 1;
		if (b[j] == '1')
			numb += 1;
	}
	return (numb);
}
