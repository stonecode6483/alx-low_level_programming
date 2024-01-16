#include "main.h"
/**
*  _puts - a function that  print a string to the standard output
*  @str: the string
*  _putchar print a new line
*/
void _puts(char *str)
{
while (*str)
_putchar(*str++);
_putchar('\0');
}

