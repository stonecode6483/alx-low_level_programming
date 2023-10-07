#include<stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
	char b;

	b = 'z';

	while
		(b >= 'a')
		{
			putchar(b);
			b--;
		}
	putchar('\n');
	return (0);
}
