#include "main.h"
/**
* strcat - concatenates two strings.
* @dest:input value
* @src:input value
* Return:void
*/
char *_strcat(char *dest, char *src)
{

int j;
int i;


i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';
return(dest);
}
