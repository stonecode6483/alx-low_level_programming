#include "main.h"
#include <stdio.h>
/**
 * main - print the name of the program
 * @argv: argument array
 * @argc:argument array
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
