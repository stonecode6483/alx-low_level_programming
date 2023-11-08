#include "main.h"

/**
 * _strstr - function finds the first occurrence of the substring needle
 * in the string haystack. The terminating null bytes (\0) are not compared
 * @needle: function parameter
 * @haystack: function parameter
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *I = haystack;
char *P = needle;

while (*I == *P && *P != '\0')
{
I++;
P++;
}
if (*P == '\0')
return (haystack);
}
return (0);
}

