#include <stdio.h>
#include "main.h"
/**
* main - prints all arguments it recieves
* @argv: argument array
* @argc: argument array
* Return: 0
*/
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
