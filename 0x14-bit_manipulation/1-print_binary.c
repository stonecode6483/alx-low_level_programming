#include "main.h"
/**
* _pow -  function that calculate power and base
* @power:exponential power
* @base: base of the number
* Return: value
*/
unsigned long int _pow(unsigned int base, unsigned int power)
{
unsigned long int numb;
unsigned int j;

numb = 1;
for (j = 1; j <= power; j++)
numb *= base;
return (numb);
}
/**
* print_binary -  a function that prints the binary
* representation of a number.
* @n: number to print
* Return: void
*/
void print_binary(unsigned long int n)
{
unsigned long int divisor, check;
char flag;

flag = 0;
divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
while (divisor != 0)
{
check = n & divisor;
if (check == divisor)
{
flag = 1;
_putchar('1');
}
else if (flag == 1 || divisor == 1)
{
_putchar('0');
}
divisor >>= 1;
}
}

