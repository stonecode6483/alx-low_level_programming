#include "main.h"
/**
 * print_last_digit - function that print last digit of a number
 * @b: function parameter
 * Return: c
 */
int print_last_digit(int b)
{
	int  c;

	c = b % 10;
	if (c < 0)
		c = -c;
	_putchar(c + '0');
	return (c);
}
