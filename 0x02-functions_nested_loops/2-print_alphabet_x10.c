#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lower case x10
 * return: 0
*/

void print_alphabet_x10(void)
{
	char t;
	int u;

	for (u = 0 ; u < 10 ; u++)
	{
		for (t = 'a' ; t <= 'z' ; t++)
			_putchar(t);
		_putchar('\n');
	}
}
