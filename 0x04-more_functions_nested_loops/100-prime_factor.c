#include <stdio.h>
/**
 * main - a function that find and  print the prime factor
 * a largest  number 612852475143
 *
 * Return: 0
 */

int main(void)
{
	long prime = 612852475143, divisor;

	while (divisor < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}
		for (divisor = 3; divisor < (prime / 2); divisor += 2)
		{
			if ((prime % divisor) == 0)
				prime /= divisor;
		}
	}
	printf("%d\n", prime);

	return (0);
}