#include "main.h"
/**
 * _puts - print a spring, folllow by a new line to standout
 * @str:string to print
 * Return:str
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');
}
