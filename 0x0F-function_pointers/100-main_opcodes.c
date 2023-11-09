#include <stdio.h>
#include <stdlib.h>
/**
* main - print own opcodes
* @argc: number of arguments
* @argv:array of arguments
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int bytes, c;
char *arr;


if (argc != 2)
{
printf("Error\n");
exit(1);
}


bytes = atoi(argv[1]);


if (bytes < 0)
{
printf("Error\n");
exit(2);
}


arr = (char *)main;


for (c = 0; c < bytes; c++)
{
if (c == bytes - 1)
{
printf("%02hhx\n", arr[c]);
break;
}
printf("%02hhx ", arr[c]);
}
return (0);
}

