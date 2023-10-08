#include<stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
	int d;

	char e;

	d = '0';
	e = 'a';
	while
		(d < 10)
		{
			putchar(d + '0');
			d++;
		}
	while
		(e <= 'f')
		{
			putchar(e);
			e++;
		}
	putchar('\n');
	return (0);
}
