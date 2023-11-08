#include "main.h"
/**
* _memset - a function that   fill a block of memory,
* with a particular value
* @s:memory to be filled
* @b:memory  value
* @n:number of bytes to change
* Return:change the array with new set of value
*/
char *_memset(char *s, char b, unsigned int n)
{
int d = 0;

for (; n > 0; d++)
{
s[d] = b;
n--;
}
return (s);
}
