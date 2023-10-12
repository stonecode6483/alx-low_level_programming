#include "main.h"
/**
 * main - function that print number for 1 to 100
 * for multiple three and five
 * Return:0
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
	if ((num % 3) == 0 && (num % 5) == 0)
		printf("Fizzbuzz");
	else if ((num % 3) == 0)
		printf("Fizz");
	else if ((num % 5) == 0)
		printf("buzz")
	else
		printf("%d", num);
	if (num == 100)
		continue;
printf(" ");
	}
	printf("\n");

	return (0);
}
