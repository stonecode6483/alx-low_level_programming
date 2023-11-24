#include "main.h"
/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: number of bits to check
 * @index: indext of the bits
 * Return: value of bites ,-1 if fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor;
	unsigned long int check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	check = n & divisor;
	if (check == divisor)
		return (1);
	return (0);
}
