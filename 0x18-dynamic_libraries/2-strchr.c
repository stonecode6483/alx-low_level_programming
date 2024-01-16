#include "main.h"
/**
*  _strchr - a function that returns a pointer to the
*  first occurrence of the character
*  @s: input 1
*  @c: input 2
*  Return: 0
*/
char *_strchr(char *s, char c)
{
int a = 0;

for (; s[a] >= '\0'; a++)
{
if (s[a] == c)
return (&s[a]);
}
return (0);
}

