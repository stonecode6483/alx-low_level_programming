#include "main.h"
/**
 *   flip_bits - a function that returns the number of bits you
 *   would need to flip to get from one number to another
 *   @n: parameter
 *   @m:parameter
 *   Return: the bites to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j = 0;
	int countbit = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		current = exclusive >> j;
		if (current & 1)
			countbit++;
	}
	return (countbit);
}
