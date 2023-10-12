#include "main.h"
/**
 * more_numbers - function that print 10 times of the number from 0o to 14
 *
 * Return: 0
 */
void more_numbers(void)
{
	int g, h;

	for (g = 0; g < 10; g++)
	{

		for (h = 0; h < 15; h++)
		{
			if (h >= 10)
				_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
		}
		_putchar('\n');
	}
}
