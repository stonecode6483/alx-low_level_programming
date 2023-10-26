#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: parameter to calculate square root
 * Return: square root of the number given
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else 
	return (_sqrt_recursion(n, 0));
}
