#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strlen -  lenght of a strin
 * @s:string to evaluate
 * Return: lenght of the string
 */
int _strlen(char *s)
{
	int a;


	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
/**
 * _strcpy -  function that copy the string pointed
 * to by src including the terminating null byte('\0')
 * to the buffer poited to the dest
 * @dest:destination pointed at by the buffer
 * @src: string to copy
 * Return: pointer to the dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, a;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (a = 0; a < len; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
		return (dest);
}
/**
 * new_dog - unction that creates a new dog.
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of dog
 * Return: pointer to the new dog,else NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = strlen(name);
	len2 = strlen(owner);

	dog = malloc(sizeof(dog_t));
			if (dog == NULL)
			return (NULL);

			dog->name = malloc(sizeof(char) * (len1 + 1));
			if (dog->name == NULL)
			{
			free(dog);
			return (NULL);
			}
			dog->owner = malloc(sizeof(char) * (len2 + 1));
				if (dog->owner == NULL)
				{
				free(dog);
				free(dog->name);
				return (NULL);
				}
				_strcpy(dog->name, name);
				_strcpy(dog->owner, owner);
				dog->age = age;
				return (dog);
}
