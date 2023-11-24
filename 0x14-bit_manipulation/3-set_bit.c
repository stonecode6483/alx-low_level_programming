#include "main.h"
/**
 *  set_bit -  a function that sets the value of a bit to 1 at a given index
 *  @n: a pointer to the string of the bites
 *  @index:  an index to the bites
 *  Return: 1  , -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setbit = 1 << index;
	*n = *n | setbit;
	return (1);
}
