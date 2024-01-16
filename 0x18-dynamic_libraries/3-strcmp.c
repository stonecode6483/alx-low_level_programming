#include "main.h"
/**
*  _strcmp - a function that compare two character
*  @s1: strind 1
*  @s2:string 2
*  Return:si[1] - s2[i]
*/
int _strcmp(char *s1, char *s2)
{
int a = 0;

while (s1[a] != '\0' && s2[a] != '\0')
{
if (s1[a] != s2[a])
{
return (s1[a] - s2[a]);
}
a++;
}
return (0);
}
