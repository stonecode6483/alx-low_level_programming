#include "main.h"
#include <stdio.h>
/**
 * times_table - a function that print a 9 column time table
 * return:0
 */

void times_table(void)
{
	int a, b, result;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			result = a * b;
			if (b == 0)
				printf("%d, ", result);
			else
			{
				printf("%2d", result);
				if (b != 9)
					printf(", ");
			}

		}
		printf("\n");
	}
}
