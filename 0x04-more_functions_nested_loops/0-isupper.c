#include "main.h"

/**
 * _isupper - proramme that check for uppercase character
 * @c:parameter text
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
