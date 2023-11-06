#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *  init_dog - a function that initialise  the variable type of struct dog
 *  @name: dog name
 *  @age: dog age
 *  @owner:dog owner
 *  @d: pointer  to the struct dog to initialize
 *  Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
