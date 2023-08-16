#include "main.h"
#include <unistd.h>
/**
 * _putchar.c - writes the character C to stdout
 * @C: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned,and errno is set appropiately.
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}
