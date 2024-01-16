#include "main.h"
/**
 * _isalpha - a function that chech for alpabet
 * @c:character to be checked
 * Return: 1 if c is an alphebet, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

