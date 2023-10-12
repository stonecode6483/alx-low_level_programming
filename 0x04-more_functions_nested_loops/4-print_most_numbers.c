#include "main.h"
/**
 * print_most_numbers - a function that  print numbers from 0 to 9
 *
 * Return : 0
 */
void print_most_numbers(void)
{
	int u;

	for (u = 48; u < 58; u++)
	{
		if (u != 50)
		{
			if (u != 52)
			{
				_putchar(u);
			}
		}
	}
	_putchar('\n');
}
