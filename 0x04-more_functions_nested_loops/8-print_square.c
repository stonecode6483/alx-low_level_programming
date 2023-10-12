#include "main.h"
/**
 * print_square - function that print a square
 * @size: size of the square
 * Return: 0
 */
void print_square(int size)
{

	int a, b;

	b = 0;

	if (size < 1)
		_putchar('\n');
	while (b < size)
	{
		a = 0;
		while (a < size)
		{
			_putchar ('#');
			a++;
		}
		_putchar('\n');
		b++;
	}
}
