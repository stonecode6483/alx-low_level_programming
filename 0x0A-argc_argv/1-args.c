#include "main.h"
#include <stdio.h>
/**
 * main - print the number of arguments passed to a program
 * @argv: array for argument
 * @argc: array of argument
 * Return : 0
 */

int main(int argc, char *argv[])
{
	(void)argv; /*ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
