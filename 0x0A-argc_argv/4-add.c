#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* check_num - check - string there are digit
* @str: array string
* Return: 0
*/
int check_num(char *str)
{
/*Declaring variable*/
unsigned int count;

count = 0;
while (count < strlen(str))/*count string*/
{
if (!isdigit(str[count]))/* check if string are digit */

{
return (0);
}
count++;
}
return (1);
}
/**
* main - print the name of  the program
* @argc: arguments
* @argv:argument
* Return: 0
*/
int main(int argc, char *argv[])
{
/*declaring variable*/
int count;
int str_to_int;
int sum = 0;

count = 1;
while (count < argc) /*goes through the whole array*/
{
if (check_num(argv[count]))
{
str_to_int = atoi(argv[count]);/*ATOI---> converting string to int*/

sum += str_to_int;
}
/*condition if  one of the number contain symbols that ar not digit*/
else
{
printf("Error\n");
return (1);
}
count++;
}
printf("%d\n", sum); /*print the sum*/
	return (0);
}
