#include<stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
	char d;

	int e;

	d = '0';
	e = 'a';
	while
		(e < 10)
		{
			putchar(e + '0');
			e++;
		}
	while
		(d <= 'f')
		{
			putchar(d);
			d++;
		}
	putchar('\n');
	return (0);
}
